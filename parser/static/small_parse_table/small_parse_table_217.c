/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_217.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1085(t_small_parse_table_array *v)
{
	v->a[21700] = anon_sym_GT_GT;
	v->a[21701] = anon_sym_LT_LT;
	v->a[21702] = aux_sym_heredoc_redirect_token1;
	v->a[21703] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21704] = anon_sym_DOLLAR;
	v->a[21705] = anon_sym_DQUOTE;
	v->a[21706] = sym_raw_string;
	v->a[21707] = sym_number;
	v->a[21708] = anon_sym_DOLLAR_LBRACE;
	v->a[21709] = anon_sym_DOLLAR_LPAREN;
	v->a[21710] = anon_sym_BQUOTE;
	v->a[21711] = sym_word;
	v->a[21712] = anon_sym_SEMI;
	v->a[21713] = 6;
	v->a[21714] = actions(3);
	v->a[21715] = 1;
	v->a[21716] = sym_comment;
	v->a[21717] = actions(921);
	v->a[21718] = 1;
	v->a[21719] = sym_variable_name;
	small_parse_table_1086(v);
}

void	small_parse_table_1086(t_small_parse_table_array *v)
{
	v->a[21720] = actions(927);
	v->a[21721] = 1;
	v->a[21722] = aux_sym_concatenation_token1;
	v->a[21723] = actions(929);
	v->a[21724] = 1;
	v->a[21725] = sym__concat;
	v->a[21726] = state(279);
	v->a[21727] = 1;
	v->a[21728] = aux_sym_concatenation_repeat1;
	v->a[21729] = actions(923);
	v->a[21730] = 20;
	v->a[21731] = anon_sym_PIPE;
	v->a[21732] = anon_sym_RPAREN;
	v->a[21733] = anon_sym_SEMI_SEMI;
	v->a[21734] = anon_sym_AMP_AMP;
	v->a[21735] = anon_sym_PIPE_PIPE;
	v->a[21736] = anon_sym_LT;
	v->a[21737] = anon_sym_GT;
	v->a[21738] = anon_sym_GT_GT;
	v->a[21739] = anon_sym_LT_LT;
	small_parse_table_1087(v);
}

void	small_parse_table_1087(t_small_parse_table_array *v)
{
	v->a[21740] = aux_sym_heredoc_redirect_token1;
	v->a[21741] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21742] = anon_sym_DOLLAR;
	v->a[21743] = anon_sym_DQUOTE;
	v->a[21744] = sym_raw_string;
	v->a[21745] = sym_number;
	v->a[21746] = anon_sym_DOLLAR_LBRACE;
	v->a[21747] = anon_sym_DOLLAR_LPAREN;
	v->a[21748] = anon_sym_BQUOTE;
	v->a[21749] = sym_word;
	v->a[21750] = anon_sym_SEMI;
	v->a[21751] = 12;
	v->a[21752] = actions(3);
	v->a[21753] = 1;
	v->a[21754] = sym_comment;
	v->a[21755] = actions(931);
	v->a[21756] = 1;
	v->a[21757] = anon_sym_RBRACE;
	v->a[21758] = actions(937);
	v->a[21759] = 1;
	small_parse_table_1088(v);
}

void	small_parse_table_1088(t_small_parse_table_array *v)
{
	v->a[21760] = anon_sym_PERCENT;
	v->a[21761] = actions(939);
	v->a[21762] = 1;
	v->a[21763] = anon_sym_POUND;
	v->a[21764] = actions(945);
	v->a[21765] = 1;
	v->a[21766] = aux_sym__simple_variable_name_token1;
	v->a[21767] = actions(947);
	v->a[21768] = 1;
	v->a[21769] = sym_variable_name;
	v->a[21770] = state(1649);
	v->a[21771] = 1;
	v->a[21772] = sym__expansion_regex;
	v->a[21773] = state(1650);
	v->a[21774] = 1;
	v->a[21775] = sym__expansion_expression;
	v->a[21776] = actions(943);
	v->a[21777] = 2;
	v->a[21778] = sym__immediate_double_hash;
	v->a[21779] = anon_sym_PERCENT_PERCENT;
	small_parse_table_1089(v);
}

void	small_parse_table_1089(t_small_parse_table_array *v)
{
	v->a[21780] = actions(935);
	v->a[21781] = 3;
	v->a[21782] = anon_sym_DASH;
	v->a[21783] = anon_sym_QMARK;
	v->a[21784] = anon_sym_0;
	v->a[21785] = actions(933);
	v->a[21786] = 4;
	v->a[21787] = anon_sym_BANG;
	v->a[21788] = anon_sym_STAR;
	v->a[21789] = anon_sym_DOLLAR;
	v->a[21790] = anon_sym_AT;
	v->a[21791] = actions(941);
	v->a[21792] = 8;
	v->a[21793] = anon_sym_COLON_DASH;
	v->a[21794] = anon_sym_DASH3;
	v->a[21795] = anon_sym_COLON_EQ;
	v->a[21796] = anon_sym_EQ2;
	v->a[21797] = anon_sym_COLON_QMARK;
	v->a[21798] = anon_sym_QMARK2;
	v->a[21799] = anon_sym_COLON_PLUS;
	small_parse_table_1090(v);
}

/* EOF small_parse_table_217.c */
