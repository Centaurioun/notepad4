#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_FSharp = {{
//++Autogenerated -- start of section automatically generated
"abstract and as asr assert atomic base begin break checked class component const constraint constructor continue "
"default delegate do done downcast downto eager elif else end event exception extern external "
"false finally fixed for fun function functor global if in include inherit inline interface internal "
"land lazy let lor lsl lsr lxor match measure member method mixin mod module mutable namespace new not null "
"object of open or override parallel private process protected public pure rec recursive return "
"sealed select sig static struct tailcall then to trait try type upcast use val virtual void volatile when while with "
"yield "

, // 1 types
"bigint bool byte char decimal double float float32 int int16 int32 int64 nativeint sbyte seq single string "
"uint uint16 uint32 uint64 unativeint unit "

, // 2 preprocessor
"else endif help i if indent light line load nowarn quit r time "

, // 3 attributes
NULL

, // 4 comment tag
"c code description event example exception include inheritdoc list listheader note para param paramref permission "
"remarks returns see seealso summary term typeparam typeparamref value "

, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_FSharp[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_FSHARP_KEYWORD, NP2StyleX_Keyword, L"bold; fore:#FF8000" },
	{ SCE_FSHARP_TYPE, NP2StyleX_Type, L"fore:#0080FF" },
	{ SCE_FSHARP_PREPROCESSOR, NP2StyleX_Preprocessor, L"fore:#FF8000" },
	{ SCE_FSHARP_ATTRIBUTE, NP2StyleX_Attribute, L"fore:#FF8000" },
	{ MULTI_STYLE(SCE_FSHARP_COMMENT, SCE_FSHARP_COMMENTLINE, 0, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ SCE_FSHARP_COMMENTLINEDOC, NP2StyleX_DocComment, L"fore:#408040" },
	//{ SCE_FSHARP_COMMENTTAG_XML, NP2StyleX_DocCommentTag, L"fore:#408080" },
	{ MULTI_STYLE(SCE_FSHARP_CHARACTER, SCE_FSHARP_STRING, SCE_FSHARP_INTERPOLATED_STRING, 0), NP2StyleX_String, L"fore:#008000" },
	{ MULTI_STYLE(SCE_FSHARP_VERBATIM_STRING, SCE_FSHARP_INTERPOLATED_VERBATIM_STRING, 0, 0), NP2StyleX_VerbatimString, L"fore:#008080" },
	{ MULTI_STYLE(SCE_FSHARP_TRIPLE_STRING, SCE_FSHARP_INTERPOLATED_TRIPLE_STRING, 0, 0), NP2StyleX_TripleQuotedString, L"fore:#F08000" },
	{ SCE_FSHARP_QUOTATION, NP2StyleX_CodeQuotation, L"fore:#006633; back:#FFF1A8; eolfilled" },
	{ SCE_FSHARP_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_FSHARP_FORMAT_SPECIFIER, NP2StyleX_FormatSpecifier, L"fore:#7C5AF3" },
	{ SCE_FSHARP_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ MULTI_STYLE(SCE_FSHARP_OPERATOR, SCE_FSHARP_OPERATOR2, 0, 0), NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexFSharp = {
	SCLEX_FSHARP, NP2LEX_FSHARP,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_IndentBasedFolding |
		LexerAttr_IndentLookForward |
		LexerAttr_PrintfFormatSpecifier |
		LexerAttr_CppPreprocessor,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 1), // function
		0,
		'\\', SCE_FSHARP_ESCAPECHAR, SCE_FSHARP_FORMAT_SPECIFIER,
		0,
		SCE_FSHARP_CHARACTER, SCE_FSHARP_IDENTIFIER,
		SCE_FSHARP_OPERATOR, SCE_FSHARP_OPERATOR2
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // types
		| KeywordAttr32(2, KeywordAttr_NoLexer | KeywordAttr_NoAutoComp) // preprocessor
		| KeywordAttr32(3, KeywordAttr_NoLexer) // attributes
		| KeywordAttr32(4, KeywordAttr_NoLexer | KeywordAttr_NoAutoComp) // comment tag
		, SCE_FSHARP_TASKMARKER,
		SCE_FSHARP_CHARACTER, SCE_FSHARP_FORMAT_SPECIFIER,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"F# Source", Styles_FSharp),
	L"fs; fsi; fsx; fsscript; fsl; fsy",
	&Keywords_FSharp,
	Styles_FSharp
};