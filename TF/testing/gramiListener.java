// Generated from grami.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link gramiParser}.
 */
public interface gramiListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link gramiParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(gramiParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramiParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(gramiParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by the {@code lsco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void enterLsco(gramiParser.LscoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code lsco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void exitLsco(gramiParser.LscoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code cdco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void enterCdco(gramiParser.CdcoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code cdco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void exitCdco(gramiParser.CdcoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code mkco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void enterMkco(gramiParser.MkcoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code mkco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void exitMkco(gramiParser.MkcoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ecco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void enterEcco(gramiParser.EccoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ecco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void exitEcco(gramiParser.EccoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code pwco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void enterPwco(gramiParser.PwcoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code pwco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void exitPwco(gramiParser.PwcoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code exco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void enterExco(gramiParser.ExcoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code exco}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void exitExco(gramiParser.ExcoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code blank}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void enterBlank(gramiParser.BlankContext ctx);
	/**
	 * Exit a parse tree produced by the {@code blank}
	 * labeled alternative in {@link gramiParser#command}.
	 * @param ctx the parse tree
	 */
	void exitBlank(gramiParser.BlankContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramiParser#arg}.
	 * @param ctx the parse tree
	 */
	void enterArg(gramiParser.ArgContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramiParser#arg}.
	 * @param ctx the parse tree
	 */
	void exitArg(gramiParser.ArgContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramiParser#item}.
	 * @param ctx the parse tree
	 */
	void enterItem(gramiParser.ItemContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramiParser#item}.
	 * @param ctx the parse tree
	 */
	void exitItem(gramiParser.ItemContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramiParser#dir}.
	 * @param ctx the parse tree
	 */
	void enterDir(gramiParser.DirContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramiParser#dir}.
	 * @param ctx the parse tree
	 */
	void exitDir(gramiParser.DirContext ctx);
	/**
	 * Enter a parse tree produced by {@link gramiParser#path}.
	 * @param ctx the parse tree
	 */
	void enterPath(gramiParser.PathContext ctx);
	/**
	 * Exit a parse tree produced by {@link gramiParser#path}.
	 * @param ctx the parse tree
	 */
	void exitPath(gramiParser.PathContext ctx);
}