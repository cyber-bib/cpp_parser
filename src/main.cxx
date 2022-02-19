#include <iostream>
#include <fstream>

#include <string>
#include <sstream>
#include <regex>

#include <cctype>
#include <climits>
#include <array>

#include <math.h>
#include <regex>

#include <tuple>
#include <vector>

#include <boost/regex.hpp>

//the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.

namespace console {
  namespace esccode {
    const std::string mods        = "\033[";
    const std::string mode        = "m";

    const std::string bold        = mods + "1" + mode; 
    const std::string reset       = mods + "0" + mode; 

    namespace foreground {
      const std::string _fg         = "3"; 
      const std::string _bfg        = "9"; 

      const std::string black       = mods + _fg + "0" + mode; 
      const std::string red         = mods + _fg + "1" + mode; 
      const std::string green       = mods + _fg + "2" + mode; 
      const std::string yellow      = mods + _fg + "3" + mode; 
      const std::string blue        = mods + _fg + "4" + mode; 
      const std::string magenta     = mods + _fg + "5" + mode; 
      const std::string cyan        = mods + _fg + "6" + mode; 
      const std::string white       = mods + _fg + "7" + mode; 

      const std::string Black       = mods + _bfg + "0" + mode; 
      const std::string Red         = mods + _bfg + "1" + mode; 
      const std::string Green       = mods + _bfg + "2" + mode; 
      const std::string Yellow      = mods + _bfg + "3" + mode; 
      const std::string Blue        = mods + _bfg + "4" + mode; 
      const std::string Magenta     = mods + _bfg + "5" + mode; 
      const std::string Cyan        = mods + _bfg + "6" + mode; 
      const std::string White       = mods + _bfg + "7" + mode; 

      const std::string boldblack   = bold + black  ; 
      const std::string boldred     = bold + red    ; 
      const std::string boldgreen   = bold + green  ; 
      const std::string boldyellow  = bold + yellow ; 
      const std::string boldblue    = bold + blue   ; 
      const std::string boldmagenta = bold + magenta; 
      const std::string boldcyan    = bold + cyan   ; 
      const std::string boldwhite   = bold + white  ; 

      const std::string boldBlack   = bold + Black  ; 
      const std::string boldRed     = bold + Red    ; 
      const std::string boldGreen   = bold + Green  ; 
      const std::string boldYellow  = bold + Yellow ; 
      const std::string boldBlue    = bold + Blue   ; 
      const std::string boldMagenta = bold + Magenta; 
      const std::string boldCyan    = bold + Cyan   ; 
      const std::string boldWhite   = bold + White  ; 
    }
    namespace background {
      const std::string _bg         = "4"; 
      const std::string _bbg        = "10"; 

      const std::string black       = mods + _bg + "0" + mode; 
      const std::string red         = mods + _bg + "1" + mode; 
      const std::string green       = mods + _bg + "2" + mode; 
      const std::string yellow      = mods + _bg + "3" + mode; 
      const std::string blue        = mods + _bg + "4" + mode; 
      const std::string magenta     = mods + _bg + "5" + mode; 
      const std::string cyan        = mods + _bg + "6" + mode; 
      const std::string white       = mods + _bg + "7" + mode; 

      const std::string Black       = mods + _bbg + "0" + mode; 
      const std::string Red         = mods + _bbg + "1" + mode; 
      const std::string Green       = mods + _bbg + "2" + mode; 
      const std::string Yellow      = mods + _bbg + "3" + mode; 
      const std::string Blue        = mods + _bbg + "4" + mode; 
      const std::string Magenta     = mods + _bbg + "5" + mode; 
      const std::string Cyan        = mods + _bbg + "6" + mode; 
      const std::string White       = mods + _bbg + "7" + mode; 
    }
  }
  #pragma region color_functions {
    #pragma region normal {
      std::string black(const std::string& str) {
        return esccode::foreground::black + str + esccode::reset;
      }
      std::string red(const std::string& str) {
        return esccode::foreground::red + str + esccode::reset;
      }
      std::string green(const std::string& str) {
        return esccode::foreground::green + str + esccode::reset;
      }
      std::string yellow(const std::string& str) {
        return esccode::foreground::yellow + str + esccode::reset;
      }
      std::string blue(const std::string& str) {
        return esccode::foreground::blue + str + esccode::reset;
      }
      std::string magenta(const std::string& str) {
        return esccode::foreground::magenta + str + esccode::reset;
      }
      std::string cyan(const std::string& str) {
        return esccode::foreground::cyan + str + esccode::reset;
      }
      std::string white(const std::string& str) {
        return esccode::foreground::white + str + esccode::reset;
      }
    #pragma endregion } normal
    #pragma region bright {
      std::string Black(const std::string& str) {
        return esccode::foreground::Black + str + esccode::reset;
      }
      std::string Red(const std::string& str) {
        return esccode::foreground::Red + str + esccode::reset;
      }
      std::string Green(const std::string& str) {
        return esccode::foreground::Green + str + esccode::reset;
      }
      std::string Yellow(const std::string& str) {
        return esccode::foreground::Yellow + str + esccode::reset;
      }
      std::string Blue(const std::string& str) {
        return esccode::foreground::Blue + str + esccode::reset;
      }
      std::string Magenta(const std::string& str) {
        return esccode::foreground::Magenta + str + esccode::reset;
      }
      std::string Cyan(const std::string& str) {
        return esccode::foreground::Cyan + str + esccode::reset;
      }
      std::string White(const std::string& str) {
        return esccode::foreground::White + str + esccode::reset;
      }
    #pragma endregion } bright

    #pragma region bold {
      #pragma region normal {
        std::string boldblack(const std::string& str) {
          return esccode::foreground::boldblack + str + esccode::reset;
        }
        std::string boldred(const std::string& str) {
          return esccode::foreground::boldred + str + esccode::reset;
        }
        std::string boldgreen(const std::string& str) {
          return esccode::foreground::boldgreen + str + esccode::reset;
        }
        std::string boldyellow(const std::string& str) {
          return esccode::foreground::boldyellow + str + esccode::reset;
        }
        std::string boldblue(const std::string& str) {
          return esccode::foreground::boldblue + str + esccode::reset;
        }
        std::string boldmagenta(const std::string& str) {
          return esccode::foreground::boldmagenta + str + esccode::reset;
        }
        std::string boldcyan(const std::string& str) {
          return esccode::foreground::boldcyan + str + esccode::reset;
        }
        std::string boldwhite(const std::string& str) {
          return esccode::foreground::boldwhite + str + esccode::reset;
        }
      #pragma endregion } normal
      #pragma region bright {
        std::string boldBlack(const std::string& str) {
          return esccode::foreground::boldBlack + str + esccode::reset;
        }
        std::string boldRed(const std::string& str) {
          return esccode::foreground::boldRed + str + esccode::reset;
        }
        std::string boldGreen(const std::string& str) {
          return esccode::foreground::boldGreen + str + esccode::reset;
        }
        std::string boldYellow(const std::string& str) {
          return esccode::foreground::boldYellow + str + esccode::reset;
        }
        std::string boldBlue(const std::string& str) {
          return esccode::foreground::boldBlue + str + esccode::reset;
        }
        std::string boldMagenta(const std::string& str) {
          return esccode::foreground::boldMagenta + str + esccode::reset;
        }
        std::string boldCyan(const std::string& str) {
          return esccode::foreground::boldCyan + str + esccode::reset;
        }
        std::string boldWhite(const std::string& str) {
          return esccode::foreground::boldWhite + str + esccode::reset;
        }
      #pragma endregion } bright
    #pragma endregion } bold
  #pragma endregion } color_functions

  void test_colors() {
    std::cout
      << black  ("black") << " " 
      << red    ("red") << " " 
      << green  ("green") << " " 
      << yellow ("yellow") << " " 
      << blue   ("blue") << " " 
      << magenta("magenta") << " " 
      << cyan   ("cyan") << " " 
      << white  ("white") << "\n" 
      << Black  ("Black") << " " 
      << Red    ("Red") << " " 
      << Green  ("Green") << " " 
      << Yellow ("Yellow") << " " 
      << Blue   ("Blue") << " " 
      << Magenta("Magenta") << " " 
      << Cyan   ("Cyan") << " " 
      << White  ("White") << "\n" 
      << boldblack  ("boldblack") << " " 
      << boldred    ("boldred") << " " 
      << boldgreen  ("boldgreen") << " " 
      << boldyellow ("boldyellow") << " " 
      << boldblue   ("boldblue") << " " 
      << boldmagenta("boldmagenta") << " " 
      << boldcyan   ("boldcyan") << " " 
      << boldwhite  ("boldwhite") << "\n"
      << boldBlack  ("boldBlack") << " " 
      << boldRed    ("boldRed") << " " 
      << boldGreen  ("boldGreen") << " " 
      << boldYellow ("boldYellow") << " " 
      << boldBlue   ("boldBlue") << " " 
      << boldMagenta("boldMagenta") << " " 
      << boldCyan   ("boldCyan") << " " 
      << boldWhite  ("boldWhite"); 
  }
};

typedef std::array<std::size_t, UCHAR_MAX + 1> char_sarr;

typedef std::array<std::size_t, 3> regex_multiline_match;
typedef std::vector<regex_multiline_match> regex_multiline_matches;

typedef std::array<regex_multiline_match, 2> regex_multiline_pair;
typedef std::vector<regex_multiline_pair> regex_multiline_pairs;

regex_multiline_matches regex_multiline(std::stringstream& sstr, const std::string& rx) {
  regex_multiline_matches result;

  sstr.clear();
  sstr.seekg(0);

  std::size_t line_counter = 0;
  std::string line;
  std::vector<std::string> lines;
  while (std::getline(sstr, line)) {
    lines.emplace_back(line);
  }

  std::smatch m;
  std::regex e (rx, std::regex::optimize | std::regex::ECMAScript);

  std::cout << "The following matches and submatches were found:" << std::endl;

  std::size_t current_col, match_start, match_end;
  bool matched, matched_line;
  for(std::size_t it = 0; it < lines.size(); it++) {
    line = lines[it];
    current_col = 0;
    matched_line = matched = std::regex_search (line,m,e);

    while (matched) {
      //currently it only works for the first match
      for (std::size_t it_2 = 0; it_2 < (m.size() > 0? 1: 0); it_2++) {
        match_start = current_col + m.position();
        match_end = match_start + m[it_2].length();
        result.push_back({it, match_start, static_cast<std::size_t>(m[it_2].length())});
      }

      line = m.suffix().str();
      current_col = match_end;
      matched = std::regex_search (line,m,e);
    }
  }

  return result;
}
regex_multiline_matches regex_multiline(const std::vector<std::string>& lines, const std::string& rx) {
  regex_multiline_matches result;

  std::smatch m;
  std::string line;
  std::regex e (rx, std::regex::optimize | std::regex::ECMAScript);

  std::cout << "The following matches and submatches were found:" << std::endl;

  std::size_t current_col, match_start, match_end;
  bool matched, matched_line;
  for(std::size_t it = 0; it < lines.size(); it++) {
    line = lines[it];
    current_col = 0;
    matched_line = matched = std::regex_search (line,m,e);

    while (matched) {
      //currently it only works for the first match
      for (std::size_t it_2 = 0; it_2 < (m.size() > 0? 1: 0); it_2++) {
        match_start = current_col + m.position();
        match_end = match_start + m[it_2].length();
        result.push_back({it, match_start, static_cast<std::size_t>(m[it_2].length())});
      }

      line = m.suffix().str();
      current_col = match_end;
      matched = std::regex_search (line,m,e);
    }
  }

  return result;
}
int regex_multiline(const std::string& path, const std::string& rx, bool print_result = true) {
  std::fstream file(path, std::fstream::in | std::fstream::out);
  if(!file.is_open()) {
    std::cout << "Error could not open file!\n";
    return 1;
  }

  std::size_t line_counter = 0;
  std::string line;
  std::vector<std::string> lines;
  while (std::getline(file, line)) {
    lines.emplace_back(line);
    // std::cout << ++line_counter << ": " << line << std::endl;
  }
  file.close();

  std::smatch m;
  std::regex e (rx, std::regex::optimize | std::regex::ECMAScript);

  std::cout << "The following matches and submatches were found:" << std::endl;

  std::size_t current_col, match_start, match_end;
  bool matched, matched_line;
  for(std::size_t it = 0; it < lines.size(); it++) {
    line = lines[it];
    current_col = 0;
    matched_line = matched = std::regex_search (line,m,e);
    // current_col = m.prefix().str().length();
    std::cout << ((matched && print_result) ? console::yellow(std::to_string(it + 1) + ": ") : "");
    while (matched) {
      if(print_result) {
        for (std::size_t it_2 = 0; it_2 < (m.size() > 0? 1: 0); it_2++) {
        // for (std::size_t it_2 = 0; it_2 < m.size(); it_2++) {
          match_start = current_col + m.position();
          match_end = match_start + m[it_2].length();
          std::cout
            << "" << (match_start + 1) << ":" << console::green("[") << console::White(m[it_2].str())
            << console::green("]") << ":" << match_end << " ";
        }
      }

      line = m.suffix().str();
      current_col = match_end;
      matched = std::regex_search (line,m,e);
    }
    std::cout << (matched_line && print_result ? "\n" : "");
  }

  return 0;
}
int boost_regex(const std::string& path, const std::string& rx) {
  std::fstream file(path, std::fstream::in | std::fstream::out);

  if(!file.is_open()) {
    std::cout << "Error could not open file!\n";
    return 1;
  }

  std::string s;
  std::stringstream ss;
  ss << file.rdbuf();
  s = ss.str();
  ss.str("");

  file.close();

  boost::smatch m;
  boost::regex e(rx);

  std::cout << "The following matches and submatches were found:" << std::endl;

  while(boost::regex_search(s, m, e)) {
    for(auto x:m) {
      std::cout << x << " ";
    };
    std::cout << std::endl;
    s = m.suffix().str();
  }

  return 0;
}

regex_multiline_pairs regex_multiline(
  const std::vector<std::string>& lines,
  const std::string& rxo,
  const std::string rxc
) {
  regex_multiline_pairs result;


  regex_multiline_matches matches;
  matches = regex_multiline(lines, "(" + rxo + "|" + rxc + ")");  
  regex_multiline_matches mos;
  mos = regex_multiline(lines, rxo);  
  regex_multiline_matches mcs;
  mcs = regex_multiline(lines, rxc);  

  if(mos.size() != mcs.size()) {
    std::cout << "mos size: " << mos.size() << "\nmcs size: " << mcs.size() << "\n";
  }

  //
  
  return result;
}
int curly_pairs(const std::string& path, bool print_result = true) {
  return regex_multiline(path, "[\\{\\}]", print_result);
}
char_sarr char_histogram(std::istream& in) {
  char ch;
  char_sarr hist;

  for(short it = 0; it < 256; it++) hist[it] = 0;

  in.clear();
  in.seekg(0);
  while (in.get(ch))   {
    std::cout << ch;
    if(std::isprint(ch)) hist[static_cast<unsigned char>(ch)]++;
  }

  std::cout << "-- Character histogram:\n";
  for(short it = 0; it < 256; it++) {
    if(std::ispunct(it)) {
      std::cout << static_cast<char>(it) << ": " << hist[it] << "\n";
    }
  }
  return hist;
}
// (?=\(.*\) *\n?\{(\n*.*)*\})
int main(int argc, char* argv[])             {
  #pragma region read file {
    if(argc != 3) {
      std::cout << "wrong number of arguements\n";
      return 1;
    }
    std::string path(argv[1]); 
    std::string rx(argv[2]);

    std::fstream file(path, std::fstream::in | std::fstream::out);
    if(!file.is_open()) {
      std::cout << "Error could not open file!\n";
      return 1;
    }

    // std::stringstream sstr;
    // sstr << file.rdbuf();

    std::size_t line_counter = 0;
    std::string line;
    std::vector<std::string> lines;
    while (std::getline(file, line)) {
      lines.emplace_back(line);
    }

    file.close();

    std::cout << "file: " << path << "\n";
    std::cout << "regex: " << rx << "\n";
  #pragma endregion } read file

  // console::test_colors();
  // return regex_multiline(path, rx);

  boost_regex(path, rx);
  // try{
  // regex_multiline(path, rx, std::regex::optimize);
  // } catch(std::regex_error& err) {
  //   std::cerr << err.what();
  // }
  // auto matches = regex_multiline(sstr, rx);

  /** // test1
  auto matches = regex_multiline(lines, rx);
  for(std::size_t it = 0; it < matches.size(); it++) {
    auto match = matches.at(it);
    std::cout
      << console::Yellow(std::to_string(match[0])) << ":("
      << console::White(std::to_string(match[1])) << ":"
      << console::Cyan(lines[match[0]].substr(match[1], match[2])) << ":"
      << console::White(std::to_string(match[2])) << ")\n"; 
  } */
  /** // test2
  auto matches = regex_multiline(lines, "\\{", "\\}");
  std::cout << lines[396].at(28);
  for(std::size_t it = 0; it < matches.size(); it++) {
    auto match = matches.at(it);

    auto open = match[0];
    auto close = match[1];

    std::cout
      << console::yellow(std::to_string(open[0])) << ":("
      << console::white(std::to_string(open[1])) << ":"
      << console::cyan(lines[open[0]].substr(open[1], open[2])) << ":"
      << console::white(std::to_string(open[2])) << ") "; 

    std::cout
      << console::yellow(std::to_string(close[0])) << ":("
      << console::white(std::to_string(close[1])) << ":"
      << console::cyan(lines[close[0]].substr(close[1], close[2])) << ":"
      << console::white(std::to_string(close[2])) << ")\n"; 
  } */


  // std::cin.get();
  return 0;
}