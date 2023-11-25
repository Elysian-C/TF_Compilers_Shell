
// Generated from gramatica.g4 by ANTLR 4.13.1


#include "gramaticaVisitor.h"

#include "gramaticaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GramaticaParserStaticData final {
  GramaticaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GramaticaParserStaticData(const GramaticaParserStaticData&) = delete;
  GramaticaParserStaticData(GramaticaParserStaticData&&) = delete;
  GramaticaParserStaticData& operator=(const GramaticaParserStaticData&) = delete;
  GramaticaParserStaticData& operator=(GramaticaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gramaticaParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GramaticaParserStaticData *gramaticaParserStaticData = nullptr;

void gramaticaParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (gramaticaParserStaticData != nullptr) {
    return;
  }
#else
  assert(gramaticaParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GramaticaParserStaticData>(
    std::vector<std::string>{
      "prog", "stat", "expr", "command", "path", "item", "var", "msg", "flag"
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
  	4,1,33,151,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,5,0,21,8,0,10,0,12,0,24,9,0,1,0,1,0,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,38,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,3,1,48,8,1,1,2,1,2,1,2,3,2,53,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,5,2,64,8,2,10,2,12,2,67,9,2,1,3,1,3,3,3,71,8,3,1,3,3,3,74,8,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,88,8,3,1,3,1,3,1,3,1,3,
  	3,3,94,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,3,3,116,8,3,1,4,1,4,1,4,1,4,3,4,122,8,4,5,4,124,
  	8,4,10,4,12,4,127,9,4,1,5,3,5,130,8,5,1,5,1,5,1,5,3,5,135,8,5,1,6,1,6,
  	1,6,1,7,4,7,141,8,7,11,7,12,7,142,1,8,1,8,3,8,147,8,8,1,8,1,8,1,8,0,1,
  	4,9,0,2,4,6,8,10,12,14,16,0,2,1,0,8,11,1,0,12,14,171,0,22,1,0,0,0,2,47,
  	1,0,0,0,4,52,1,0,0,0,6,115,1,0,0,0,8,117,1,0,0,0,10,134,1,0,0,0,12,136,
  	1,0,0,0,14,140,1,0,0,0,16,144,1,0,0,0,18,21,3,6,3,0,19,21,3,2,1,0,20,
  	18,1,0,0,0,20,19,1,0,0,0,21,24,1,0,0,0,22,20,1,0,0,0,22,23,1,0,0,0,23,
  	25,1,0,0,0,24,22,1,0,0,0,25,26,5,0,0,1,26,1,1,0,0,0,27,28,5,1,0,0,28,
  	29,5,2,0,0,29,30,3,4,2,0,30,31,3,16,8,0,31,32,3,4,2,0,32,33,5,3,0,0,33,
  	34,5,4,0,0,34,37,3,6,3,0,35,36,5,5,0,0,36,38,3,6,3,0,37,35,1,0,0,0,37,
  	38,1,0,0,0,38,39,1,0,0,0,39,40,5,6,0,0,40,41,5,33,0,0,41,48,1,0,0,0,42,
  	43,5,7,0,0,43,48,5,33,0,0,44,45,3,4,2,0,45,46,5,33,0,0,46,48,1,0,0,0,
  	47,27,1,0,0,0,47,42,1,0,0,0,47,44,1,0,0,0,48,3,1,0,0,0,49,50,6,2,-1,0,
  	50,53,5,30,0,0,51,53,5,29,0,0,52,49,1,0,0,0,52,51,1,0,0,0,53,65,1,0,0,
  	0,54,55,10,5,0,0,55,56,7,0,0,0,56,64,3,4,2,6,57,58,10,4,0,0,58,59,7,1,
  	0,0,59,64,3,4,2,5,60,61,10,3,0,0,61,62,5,15,0,0,62,64,3,4,2,4,63,54,1,
  	0,0,0,63,57,1,0,0,0,63,60,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,
  	0,0,0,66,5,1,0,0,0,67,65,1,0,0,0,68,70,5,16,0,0,69,71,3,16,8,0,70,69,
  	1,0,0,0,70,71,1,0,0,0,71,73,1,0,0,0,72,74,3,8,4,0,73,72,1,0,0,0,73,74,
  	1,0,0,0,74,75,1,0,0,0,75,116,5,33,0,0,76,77,5,17,0,0,77,78,3,8,4,0,78,
  	79,5,33,0,0,79,116,1,0,0,0,80,81,5,18,0,0,81,82,3,8,4,0,82,83,5,33,0,
  	0,83,116,1,0,0,0,84,87,5,19,0,0,85,88,3,12,6,0,86,88,3,14,7,0,87,85,1,
  	0,0,0,87,86,1,0,0,0,88,89,1,0,0,0,89,90,5,33,0,0,90,116,1,0,0,0,91,93,
  	5,20,0,0,92,94,3,16,8,0,93,92,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,
  	96,3,8,4,0,96,97,5,33,0,0,97,116,1,0,0,0,98,99,5,21,0,0,99,100,3,8,4,
  	0,100,101,3,8,4,0,101,102,5,33,0,0,102,116,1,0,0,0,103,104,5,22,0,0,104,
  	105,3,8,4,0,105,106,3,8,4,0,106,107,5,33,0,0,107,116,1,0,0,0,108,109,
  	5,23,0,0,109,116,5,33,0,0,110,111,5,24,0,0,111,116,5,33,0,0,112,113,5,
  	25,0,0,113,116,5,33,0,0,114,116,5,33,0,0,115,68,1,0,0,0,115,76,1,0,0,
  	0,115,80,1,0,0,0,115,84,1,0,0,0,115,91,1,0,0,0,115,98,1,0,0,0,115,103,
  	1,0,0,0,115,108,1,0,0,0,115,110,1,0,0,0,115,112,1,0,0,0,115,114,1,0,0,
  	0,116,7,1,0,0,0,117,125,3,10,5,0,118,119,5,11,0,0,119,121,3,10,5,0,120,
  	122,5,11,0,0,121,120,1,0,0,0,121,122,1,0,0,0,122,124,1,0,0,0,123,118,
  	1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,9,1,0,0,0,
  	127,125,1,0,0,0,128,130,5,26,0,0,129,128,1,0,0,0,129,130,1,0,0,0,130,
  	131,1,0,0,0,131,135,5,29,0,0,132,135,5,27,0,0,133,135,5,28,0,0,134,129,
  	1,0,0,0,134,132,1,0,0,0,134,133,1,0,0,0,135,11,1,0,0,0,136,137,5,26,0,
  	0,137,138,5,29,0,0,138,13,1,0,0,0,139,141,5,29,0,0,140,139,1,0,0,0,141,
  	142,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,0,143,15,1,0,0,0,144,146,5,
  	9,0,0,145,147,5,9,0,0,146,145,1,0,0,0,146,147,1,0,0,0,147,148,1,0,0,0,
  	148,149,5,29,0,0,149,17,1,0,0,0,18,20,22,37,47,52,63,65,70,73,87,93,115,
  	121,125,129,134,142,146
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gramaticaParserStaticData = staticData.release();
}

}

gramaticaParser::gramaticaParser(TokenStream *input) : gramaticaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

gramaticaParser::gramaticaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  gramaticaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *gramaticaParserStaticData->atn, gramaticaParserStaticData->decisionToDFA, gramaticaParserStaticData->sharedContextCache, options);
}

gramaticaParser::~gramaticaParser() {
  delete _interpreter;
}

const atn::ATN& gramaticaParser::getATN() const {
  return *gramaticaParserStaticData->atn;
}

std::string gramaticaParser::getGrammarFileName() const {
  return "gramatica.g4";
}

const std::vector<std::string>& gramaticaParser::getRuleNames() const {
  return gramaticaParserStaticData->ruleNames;
}

const dfa::Vocabulary& gramaticaParser::getVocabulary() const {
  return gramaticaParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView gramaticaParser::getSerializedATN() const {
  return gramaticaParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

gramaticaParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::ProgContext::EOF() {
  return getToken(gramaticaParser::EOF, 0);
}

std::vector<gramaticaParser::CommandContext *> gramaticaParser::ProgContext::command() {
  return getRuleContexts<gramaticaParser::CommandContext>();
}

gramaticaParser::CommandContext* gramaticaParser::ProgContext::command(size_t i) {
  return getRuleContext<gramaticaParser::CommandContext>(i);
}

std::vector<gramaticaParser::StatContext *> gramaticaParser::ProgContext::stat() {
  return getRuleContexts<gramaticaParser::StatContext>();
}

gramaticaParser::StatContext* gramaticaParser::ProgContext::stat(size_t i) {
  return getRuleContext<gramaticaParser::StatContext>(i);
}


size_t gramaticaParser::ProgContext::getRuleIndex() const {
  return gramaticaParser::RuleProg;
}


std::any gramaticaParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ProgContext* gramaticaParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, gramaticaParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 10267590786) != 0)) {
      setState(20);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case gramaticaParser::T__15:
        case gramaticaParser::T__16:
        case gramaticaParser::T__17:
        case gramaticaParser::T__18:
        case gramaticaParser::T__19:
        case gramaticaParser::T__20:
        case gramaticaParser::T__21:
        case gramaticaParser::T__22:
        case gramaticaParser::T__23:
        case gramaticaParser::T__24:
        case gramaticaParser::NEWLINE: {
          setState(18);
          command();
          break;
        }

        case gramaticaParser::T__0:
        case gramaticaParser::T__6:
        case gramaticaParser::STRING:
        case gramaticaParser::NUMBER: {
          setState(19);
          stat();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(24);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(25);
    match(gramaticaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

gramaticaParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramaticaParser::StatContext::getRuleIndex() const {
  return gramaticaParser::RuleStat;
}

void gramaticaParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ForstContext ------------------------------------------------------------------

tree::TerminalNode* gramaticaParser::ForstContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::ForstContext::ForstContext(StatContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::ForstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitForst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OtherstContext ------------------------------------------------------------------

gramaticaParser::ExprContext* gramaticaParser::OtherstContext::expr() {
  return getRuleContext<gramaticaParser::ExprContext>(0);
}

tree::TerminalNode* gramaticaParser::OtherstContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::OtherstContext::OtherstContext(StatContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::OtherstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitOtherst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfstContext ------------------------------------------------------------------

std::vector<gramaticaParser::ExprContext *> gramaticaParser::IfstContext::expr() {
  return getRuleContexts<gramaticaParser::ExprContext>();
}

gramaticaParser::ExprContext* gramaticaParser::IfstContext::expr(size_t i) {
  return getRuleContext<gramaticaParser::ExprContext>(i);
}

gramaticaParser::FlagContext* gramaticaParser::IfstContext::flag() {
  return getRuleContext<gramaticaParser::FlagContext>(0);
}

std::vector<gramaticaParser::CommandContext *> gramaticaParser::IfstContext::command() {
  return getRuleContexts<gramaticaParser::CommandContext>();
}

gramaticaParser::CommandContext* gramaticaParser::IfstContext::command(size_t i) {
  return getRuleContext<gramaticaParser::CommandContext>(i);
}

tree::TerminalNode* gramaticaParser::IfstContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::IfstContext::IfstContext(StatContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::IfstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitIfst(this);
  else
    return visitor->visitChildren(this);
}
gramaticaParser::StatContext* gramaticaParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, gramaticaParser::RuleStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramaticaParser::T__0: {
        _localctx = _tracker.createInstance<gramaticaParser::IfstContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(27);
        match(gramaticaParser::T__0);
        setState(28);
        match(gramaticaParser::T__1);
        setState(29);
        expr(0);
        setState(30);
        flag();
        setState(31);
        expr(0);
        setState(32);
        match(gramaticaParser::T__2);
        setState(33);
        match(gramaticaParser::T__3);
        setState(34);
        command();
        setState(37);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == gramaticaParser::T__4) {
          setState(35);
          match(gramaticaParser::T__4);
          setState(36);
          command();
        }
        setState(39);
        match(gramaticaParser::T__5);
        setState(40);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__6: {
        _localctx = _tracker.createInstance<gramaticaParser::ForstContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(42);
        match(gramaticaParser::T__6);
        setState(43);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::STRING:
      case gramaticaParser::NUMBER: {
        _localctx = _tracker.createInstance<gramaticaParser::OtherstContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(44);
        expr(0);
        setState(45);
        match(gramaticaParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

gramaticaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::ExprContext::NUMBER() {
  return getToken(gramaticaParser::NUMBER, 0);
}

tree::TerminalNode* gramaticaParser::ExprContext::STRING() {
  return getToken(gramaticaParser::STRING, 0);
}

std::vector<gramaticaParser::ExprContext *> gramaticaParser::ExprContext::expr() {
  return getRuleContexts<gramaticaParser::ExprContext>();
}

gramaticaParser::ExprContext* gramaticaParser::ExprContext::expr(size_t i) {
  return getRuleContext<gramaticaParser::ExprContext>(i);
}


size_t gramaticaParser::ExprContext::getRuleIndex() const {
  return gramaticaParser::RuleExpr;
}


std::any gramaticaParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


gramaticaParser::ExprContext* gramaticaParser::expr() {
   return expr(0);
}

gramaticaParser::ExprContext* gramaticaParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  gramaticaParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  gramaticaParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, gramaticaParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(52);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramaticaParser::NUMBER: {
        setState(50);
        match(gramaticaParser::NUMBER);
        break;
      }

      case gramaticaParser::STRING: {
        setState(51);
        match(gramaticaParser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(65);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(63);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(54);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(55);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 3840) != 0))) {
            antlrcpp::downCast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(56);
          expr(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(57);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(58);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 28672) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(59);
          expr(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(60);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(61);
          match(gramaticaParser::T__14);
          setState(62);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(67);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

gramaticaParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t gramaticaParser::CommandContext::getRuleIndex() const {
  return gramaticaParser::RuleCommand;
}

void gramaticaParser::CommandContext::copyFrom(CommandContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExcoContext ------------------------------------------------------------------

tree::TerminalNode* gramaticaParser::ExcoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::ExcoContext::ExcoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::ExcoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitExco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LscoContext ------------------------------------------------------------------

tree::TerminalNode* gramaticaParser::LscoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::FlagContext* gramaticaParser::LscoContext::flag() {
  return getRuleContext<gramaticaParser::FlagContext>(0);
}

gramaticaParser::PathContext* gramaticaParser::LscoContext::path() {
  return getRuleContext<gramaticaParser::PathContext>(0);
}

gramaticaParser::LscoContext::LscoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::LscoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitLsco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RmcoContext ------------------------------------------------------------------

gramaticaParser::PathContext* gramaticaParser::RmcoContext::path() {
  return getRuleContext<gramaticaParser::PathContext>(0);
}

tree::TerminalNode* gramaticaParser::RmcoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::FlagContext* gramaticaParser::RmcoContext::flag() {
  return getRuleContext<gramaticaParser::FlagContext>(0);
}

gramaticaParser::RmcoContext::RmcoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::RmcoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitRmco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CdcoContext ------------------------------------------------------------------

gramaticaParser::PathContext* gramaticaParser::CdcoContext::path() {
  return getRuleContext<gramaticaParser::PathContext>(0);
}

tree::TerminalNode* gramaticaParser::CdcoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::CdcoContext::CdcoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::CdcoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitCdco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* gramaticaParser::BlankContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::BlankContext::BlankContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EccoContext ------------------------------------------------------------------

tree::TerminalNode* gramaticaParser::EccoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::VarContext* gramaticaParser::EccoContext::var() {
  return getRuleContext<gramaticaParser::VarContext>(0);
}

gramaticaParser::MsgContext* gramaticaParser::EccoContext::msg() {
  return getRuleContext<gramaticaParser::MsgContext>(0);
}

gramaticaParser::EccoContext::EccoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::EccoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitEcco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MvcoContext ------------------------------------------------------------------

std::vector<gramaticaParser::PathContext *> gramaticaParser::MvcoContext::path() {
  return getRuleContexts<gramaticaParser::PathContext>();
}

gramaticaParser::PathContext* gramaticaParser::MvcoContext::path(size_t i) {
  return getRuleContext<gramaticaParser::PathContext>(i);
}

tree::TerminalNode* gramaticaParser::MvcoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::MvcoContext::MvcoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::MvcoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitMvco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CpcoContext ------------------------------------------------------------------

std::vector<gramaticaParser::PathContext *> gramaticaParser::CpcoContext::path() {
  return getRuleContexts<gramaticaParser::PathContext>();
}

gramaticaParser::PathContext* gramaticaParser::CpcoContext::path(size_t i) {
  return getRuleContext<gramaticaParser::PathContext>(i);
}

tree::TerminalNode* gramaticaParser::CpcoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::CpcoContext::CpcoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::CpcoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitCpco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PwcoContext ------------------------------------------------------------------

tree::TerminalNode* gramaticaParser::PwcoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::PwcoContext::PwcoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::PwcoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitPwco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MkcoContext ------------------------------------------------------------------

gramaticaParser::PathContext* gramaticaParser::MkcoContext::path() {
  return getRuleContext<gramaticaParser::PathContext>(0);
}

tree::TerminalNode* gramaticaParser::MkcoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::MkcoContext::MkcoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::MkcoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitMkco(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClcoContext ------------------------------------------------------------------

tree::TerminalNode* gramaticaParser::ClcoContext::NEWLINE() {
  return getToken(gramaticaParser::NEWLINE, 0);
}

gramaticaParser::ClcoContext::ClcoContext(CommandContext *ctx) { copyFrom(ctx); }


std::any gramaticaParser::ClcoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitClco(this);
  else
    return visitor->visitChildren(this);
}
gramaticaParser::CommandContext* gramaticaParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 6, gramaticaParser::RuleCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramaticaParser::T__15: {
        _localctx = _tracker.createInstance<gramaticaParser::LscoContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(68);
        match(gramaticaParser::T__15);
        setState(70);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == gramaticaParser::T__8) {
          setState(69);
          flag();
        }
        setState(73);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1006632960) != 0)) {
          setState(72);
          path();
        }
        setState(75);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__16: {
        _localctx = _tracker.createInstance<gramaticaParser::CdcoContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(76);
        match(gramaticaParser::T__16);
        setState(77);
        path();
        setState(78);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__17: {
        _localctx = _tracker.createInstance<gramaticaParser::MkcoContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(80);
        match(gramaticaParser::T__17);
        setState(81);
        path();
        setState(82);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__18: {
        _localctx = _tracker.createInstance<gramaticaParser::EccoContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(84);
        match(gramaticaParser::T__18);
        setState(87);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case gramaticaParser::T__25: {
            setState(85);
            var();
            break;
          }

          case gramaticaParser::STRING: {
            setState(86);
            msg();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(89);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__19: {
        _localctx = _tracker.createInstance<gramaticaParser::RmcoContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(91);
        match(gramaticaParser::T__19);
        setState(93);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == gramaticaParser::T__8) {
          setState(92);
          flag();
        }
        setState(95);
        path();
        setState(96);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__20: {
        _localctx = _tracker.createInstance<gramaticaParser::CpcoContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(98);
        match(gramaticaParser::T__20);
        setState(99);
        path();
        setState(100);
        path();
        setState(101);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__21: {
        _localctx = _tracker.createInstance<gramaticaParser::MvcoContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(103);
        match(gramaticaParser::T__21);
        setState(104);
        path();
        setState(105);
        path();
        setState(106);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__22: {
        _localctx = _tracker.createInstance<gramaticaParser::PwcoContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(108);
        match(gramaticaParser::T__22);
        setState(109);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__23: {
        _localctx = _tracker.createInstance<gramaticaParser::ClcoContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(110);
        match(gramaticaParser::T__23);
        setState(111);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::T__24: {
        _localctx = _tracker.createInstance<gramaticaParser::ExcoContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(112);
        match(gramaticaParser::T__24);
        setState(113);
        match(gramaticaParser::NEWLINE);
        break;
      }

      case gramaticaParser::NEWLINE: {
        _localctx = _tracker.createInstance<gramaticaParser::BlankContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(114);
        match(gramaticaParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathContext ------------------------------------------------------------------

gramaticaParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramaticaParser::ItemContext *> gramaticaParser::PathContext::item() {
  return getRuleContexts<gramaticaParser::ItemContext>();
}

gramaticaParser::ItemContext* gramaticaParser::PathContext::item(size_t i) {
  return getRuleContext<gramaticaParser::ItemContext>(i);
}


size_t gramaticaParser::PathContext::getRuleIndex() const {
  return gramaticaParser::RulePath;
}


std::any gramaticaParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::PathContext* gramaticaParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 8, gramaticaParser::RulePath);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    item();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramaticaParser::T__10) {
      setState(118);
      match(gramaticaParser::T__10);
      setState(119);
      item();
      setState(121);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(120);
        match(gramaticaParser::T__10);
        break;
      }

      default:
        break;
      }
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ItemContext ------------------------------------------------------------------

gramaticaParser::ItemContext::ItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::ItemContext::STRING() {
  return getToken(gramaticaParser::STRING, 0);
}


size_t gramaticaParser::ItemContext::getRuleIndex() const {
  return gramaticaParser::RuleItem;
}


std::any gramaticaParser::ItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitItem(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ItemContext* gramaticaParser::item() {
  ItemContext *_localctx = _tracker.createInstance<ItemContext>(_ctx, getState());
  enterRule(_localctx, 10, gramaticaParser::RuleItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramaticaParser::T__25:
      case gramaticaParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(129);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == gramaticaParser::T__25) {
          setState(128);
          match(gramaticaParser::T__25);
        }
        setState(131);
        match(gramaticaParser::STRING);
        break;
      }

      case gramaticaParser::T__26: {
        enterOuterAlt(_localctx, 2);
        setState(132);
        match(gramaticaParser::T__26);
        break;
      }

      case gramaticaParser::T__27: {
        enterOuterAlt(_localctx, 3);
        setState(133);
        match(gramaticaParser::T__27);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

gramaticaParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::VarContext::STRING() {
  return getToken(gramaticaParser::STRING, 0);
}


size_t gramaticaParser::VarContext::getRuleIndex() const {
  return gramaticaParser::RuleVar;
}


std::any gramaticaParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::VarContext* gramaticaParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 12, gramaticaParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(gramaticaParser::T__25);
    setState(137);
    match(gramaticaParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MsgContext ------------------------------------------------------------------

gramaticaParser::MsgContext::MsgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> gramaticaParser::MsgContext::STRING() {
  return getTokens(gramaticaParser::STRING);
}

tree::TerminalNode* gramaticaParser::MsgContext::STRING(size_t i) {
  return getToken(gramaticaParser::STRING, i);
}


size_t gramaticaParser::MsgContext::getRuleIndex() const {
  return gramaticaParser::RuleMsg;
}


std::any gramaticaParser::MsgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitMsg(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::MsgContext* gramaticaParser::msg() {
  MsgContext *_localctx = _tracker.createInstance<MsgContext>(_ctx, getState());
  enterRule(_localctx, 14, gramaticaParser::RuleMsg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(139);
      match(gramaticaParser::STRING);
      setState(142); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == gramaticaParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlagContext ------------------------------------------------------------------

gramaticaParser::FlagContext::FlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::FlagContext::STRING() {
  return getToken(gramaticaParser::STRING, 0);
}


size_t gramaticaParser::FlagContext::getRuleIndex() const {
  return gramaticaParser::RuleFlag;
}


std::any gramaticaParser::FlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitFlag(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::FlagContext* gramaticaParser::flag() {
  FlagContext *_localctx = _tracker.createInstance<FlagContext>(_ctx, getState());
  enterRule(_localctx, 16, gramaticaParser::RuleFlag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(gramaticaParser::T__8);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == gramaticaParser::T__8) {
      setState(145);
      match(gramaticaParser::T__8);
    }
    setState(148);
    match(gramaticaParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool gramaticaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool gramaticaParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void gramaticaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  gramaticaParserInitialize();
#else
  ::antlr4::internal::call_once(gramaticaParserOnceFlag, gramaticaParserInitialize);
#endif
}
