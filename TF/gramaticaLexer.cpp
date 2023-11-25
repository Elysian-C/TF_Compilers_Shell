
// Generated from gramatica.g4 by ANTLR 4.13.1


#include "gramaticaLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GramaticaLexerStaticData final {
  GramaticaLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GramaticaLexerStaticData(const GramaticaLexerStaticData&) = delete;
  GramaticaLexerStaticData(GramaticaLexerStaticData&&) = delete;
  GramaticaLexerStaticData& operator=(const GramaticaLexerStaticData&) = delete;
  GramaticaLexerStaticData& operator=(GramaticaLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gramaticalexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GramaticaLexerStaticData *gramaticalexerLexerStaticData = nullptr;

void gramaticalexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (gramaticalexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(gramaticalexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GramaticaLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "STRING", "NUMBER", "INT", "WS", "NEWLINE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'if'", "'['", "'];'", "'then'", "'else'", "'fi'", "'for'", "'+'", 
      "'-'", "'*'", "'/'", "'^'", "'&'", "'|'", "'='", "'ls'", "'cd'", "'mkdir'", 
      "'echo'", "'rm'", "'cp'", "'mv'", "'pwd'", "'clear'", "'exit'", "'$'", 
      "'.'", "'..'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "STRING", "NUMBER", 
      "INT", "WS", "NEWLINE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,33,204,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,0,1,1,1,1,1,2,
  	1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,
  	6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,
  	1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,
  	1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,
  	1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,28,1,28,5,28,159,8,28,10,28,
  	12,28,162,9,28,1,29,4,29,165,8,29,11,29,12,29,166,1,29,1,29,4,29,171,
  	8,29,11,29,12,29,172,1,29,1,29,3,29,177,8,29,1,29,4,29,180,8,29,11,29,
  	12,29,181,3,29,184,8,29,3,29,186,8,29,1,30,4,30,189,8,30,11,30,12,30,
  	190,1,31,4,31,194,8,31,11,31,12,31,195,1,31,1,31,1,32,3,32,201,8,32,1,
  	32,1,32,0,0,33,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,
  	12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,
  	47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,1,0,6,2,0,
  	65,90,97,122,7,0,33,34,37,39,46,46,48,57,64,90,94,95,97,122,1,0,48,57,
  	2,0,69,69,101,101,2,0,43,43,45,45,2,0,9,9,32,32,213,0,1,1,0,0,0,0,3,1,
  	0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,
  	15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,
  	0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,
  	0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,
  	47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,
  	0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,1,67,1,0,0,
  	0,3,70,1,0,0,0,5,72,1,0,0,0,7,75,1,0,0,0,9,80,1,0,0,0,11,85,1,0,0,0,13,
  	88,1,0,0,0,15,92,1,0,0,0,17,94,1,0,0,0,19,96,1,0,0,0,21,98,1,0,0,0,23,
  	100,1,0,0,0,25,102,1,0,0,0,27,104,1,0,0,0,29,106,1,0,0,0,31,108,1,0,0,
  	0,33,111,1,0,0,0,35,114,1,0,0,0,37,120,1,0,0,0,39,125,1,0,0,0,41,128,
  	1,0,0,0,43,131,1,0,0,0,45,134,1,0,0,0,47,138,1,0,0,0,49,144,1,0,0,0,51,
  	149,1,0,0,0,53,151,1,0,0,0,55,153,1,0,0,0,57,156,1,0,0,0,59,164,1,0,0,
  	0,61,188,1,0,0,0,63,193,1,0,0,0,65,200,1,0,0,0,67,68,5,105,0,0,68,69,
  	5,102,0,0,69,2,1,0,0,0,70,71,5,91,0,0,71,4,1,0,0,0,72,73,5,93,0,0,73,
  	74,5,59,0,0,74,6,1,0,0,0,75,76,5,116,0,0,76,77,5,104,0,0,77,78,5,101,
  	0,0,78,79,5,110,0,0,79,8,1,0,0,0,80,81,5,101,0,0,81,82,5,108,0,0,82,83,
  	5,115,0,0,83,84,5,101,0,0,84,10,1,0,0,0,85,86,5,102,0,0,86,87,5,105,0,
  	0,87,12,1,0,0,0,88,89,5,102,0,0,89,90,5,111,0,0,90,91,5,114,0,0,91,14,
  	1,0,0,0,92,93,5,43,0,0,93,16,1,0,0,0,94,95,5,45,0,0,95,18,1,0,0,0,96,
  	97,5,42,0,0,97,20,1,0,0,0,98,99,5,47,0,0,99,22,1,0,0,0,100,101,5,94,0,
  	0,101,24,1,0,0,0,102,103,5,38,0,0,103,26,1,0,0,0,104,105,5,124,0,0,105,
  	28,1,0,0,0,106,107,5,61,0,0,107,30,1,0,0,0,108,109,5,108,0,0,109,110,
  	5,115,0,0,110,32,1,0,0,0,111,112,5,99,0,0,112,113,5,100,0,0,113,34,1,
  	0,0,0,114,115,5,109,0,0,115,116,5,107,0,0,116,117,5,100,0,0,117,118,5,
  	105,0,0,118,119,5,114,0,0,119,36,1,0,0,0,120,121,5,101,0,0,121,122,5,
  	99,0,0,122,123,5,104,0,0,123,124,5,111,0,0,124,38,1,0,0,0,125,126,5,114,
  	0,0,126,127,5,109,0,0,127,40,1,0,0,0,128,129,5,99,0,0,129,130,5,112,0,
  	0,130,42,1,0,0,0,131,132,5,109,0,0,132,133,5,118,0,0,133,44,1,0,0,0,134,
  	135,5,112,0,0,135,136,5,119,0,0,136,137,5,100,0,0,137,46,1,0,0,0,138,
  	139,5,99,0,0,139,140,5,108,0,0,140,141,5,101,0,0,141,142,5,97,0,0,142,
  	143,5,114,0,0,143,48,1,0,0,0,144,145,5,101,0,0,145,146,5,120,0,0,146,
  	147,5,105,0,0,147,148,5,116,0,0,148,50,1,0,0,0,149,150,5,36,0,0,150,52,
  	1,0,0,0,151,152,5,46,0,0,152,54,1,0,0,0,153,154,5,46,0,0,154,155,5,46,
  	0,0,155,56,1,0,0,0,156,160,7,0,0,0,157,159,7,1,0,0,158,157,1,0,0,0,159,
  	162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,58,1,0,0,0,162,160,1,
  	0,0,0,163,165,7,2,0,0,164,163,1,0,0,0,165,166,1,0,0,0,166,164,1,0,0,0,
  	166,167,1,0,0,0,167,185,1,0,0,0,168,170,5,46,0,0,169,171,7,2,0,0,170,
  	169,1,0,0,0,171,172,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,183,1,
  	0,0,0,174,176,7,3,0,0,175,177,7,4,0,0,176,175,1,0,0,0,176,177,1,0,0,0,
  	177,179,1,0,0,0,178,180,7,2,0,0,179,178,1,0,0,0,180,181,1,0,0,0,181,179,
  	1,0,0,0,181,182,1,0,0,0,182,184,1,0,0,0,183,174,1,0,0,0,183,184,1,0,0,
  	0,184,186,1,0,0,0,185,168,1,0,0,0,185,186,1,0,0,0,186,60,1,0,0,0,187,
  	189,7,2,0,0,188,187,1,0,0,0,189,190,1,0,0,0,190,188,1,0,0,0,190,191,1,
  	0,0,0,191,62,1,0,0,0,192,194,7,5,0,0,193,192,1,0,0,0,194,195,1,0,0,0,
  	195,193,1,0,0,0,195,196,1,0,0,0,196,197,1,0,0,0,197,198,6,31,0,0,198,
  	64,1,0,0,0,199,201,5,13,0,0,200,199,1,0,0,0,200,201,1,0,0,0,201,202,1,
  	0,0,0,202,203,5,10,0,0,203,66,1,0,0,0,11,0,160,166,172,176,181,183,185,
  	190,195,200,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gramaticalexerLexerStaticData = staticData.release();
}

}

gramaticaLexer::gramaticaLexer(CharStream *input) : Lexer(input) {
  gramaticaLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *gramaticalexerLexerStaticData->atn, gramaticalexerLexerStaticData->decisionToDFA, gramaticalexerLexerStaticData->sharedContextCache);
}

gramaticaLexer::~gramaticaLexer() {
  delete _interpreter;
}

std::string gramaticaLexer::getGrammarFileName() const {
  return "gramatica.g4";
}

const std::vector<std::string>& gramaticaLexer::getRuleNames() const {
  return gramaticalexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& gramaticaLexer::getChannelNames() const {
  return gramaticalexerLexerStaticData->channelNames;
}

const std::vector<std::string>& gramaticaLexer::getModeNames() const {
  return gramaticalexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& gramaticaLexer::getVocabulary() const {
  return gramaticalexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView gramaticaLexer::getSerializedATN() const {
  return gramaticalexerLexerStaticData->serializedATN;
}

const atn::ATN& gramaticaLexer::getATN() const {
  return *gramaticalexerLexerStaticData->atn;
}




void gramaticaLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  gramaticalexerLexerInitialize();
#else
  ::antlr4::internal::call_once(gramaticalexerLexerOnceFlag, gramaticalexerLexerInitialize);
#endif
}
