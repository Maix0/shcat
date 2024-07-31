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
	v->a[21700] = 1;
	v->a[21701] = anon_sym_CARET;
	v->a[21702] = actions(425);
	v->a[21703] = 1;
	v->a[21704] = anon_sym_AMP;
	v->a[21705] = actions(479);
	v->a[21706] = 1;
	v->a[21707] = anon_sym_QMARK;
	v->a[21708] = actions(485);
	v->a[21709] = 1;
	v->a[21710] = anon_sym_EQ;
	v->a[21711] = actions(728);
	v->a[21712] = 1;
	v->a[21713] = anon_sym_RPAREN_RPAREN;
	v->a[21714] = actions(405);
	v->a[21715] = 2;
	v->a[21716] = anon_sym_PLUS_PLUS2;
	v->a[21717] = anon_sym_DASH_DASH2;
	v->a[21718] = actions(417);
	v->a[21719] = 2;
	small_parse_table_1086(v);
}

void	small_parse_table_1086(t_small_parse_table_array *v)
{
	v->a[21720] = anon_sym_LT;
	v->a[21721] = anon_sym_GT;
	v->a[21722] = actions(419);
	v->a[21723] = 2;
	v->a[21724] = anon_sym_GT_GT;
	v->a[21725] = anon_sym_LT_LT;
	v->a[21726] = actions(427);
	v->a[21727] = 2;
	v->a[21728] = anon_sym_EQ_EQ;
	v->a[21729] = anon_sym_BANG_EQ;
	v->a[21730] = actions(429);
	v->a[21731] = 2;
	v->a[21732] = anon_sym_LT_EQ;
	v->a[21733] = anon_sym_GT_EQ;
	v->a[21734] = actions(431);
	v->a[21735] = 2;
	v->a[21736] = anon_sym_PLUS;
	v->a[21737] = anon_sym_DASH;
	v->a[21738] = actions(433);
	v->a[21739] = 3;
	small_parse_table_1087(v);
}

void	small_parse_table_1087(t_small_parse_table_array *v)
{
	v->a[21740] = anon_sym_STAR;
	v->a[21741] = anon_sym_SLASH;
	v->a[21742] = anon_sym_PERCENT;
	v->a[21743] = actions(493);
	v->a[21744] = 10;
	v->a[21745] = anon_sym_PLUS_EQ;
	v->a[21746] = anon_sym_DASH_EQ;
	v->a[21747] = anon_sym_STAR_EQ;
	v->a[21748] = anon_sym_SLASH_EQ;
	v->a[21749] = anon_sym_PERCENT_EQ;
	v->a[21750] = anon_sym_LT_LT_EQ;
	v->a[21751] = anon_sym_GT_GT_EQ;
	v->a[21752] = anon_sym_AMP_EQ;
	v->a[21753] = anon_sym_CARET_EQ;
	v->a[21754] = anon_sym_PIPE_EQ;
	v->a[21755] = 5;
	v->a[21756] = actions(3);
	v->a[21757] = 1;
	v->a[21758] = sym_comment;
	v->a[21759] = actions(489);
	small_parse_table_1088(v);
}

void	small_parse_table_1088(t_small_parse_table_array *v)
{
	v->a[21760] = 2;
	v->a[21761] = sym_variable_name;
	v->a[21762] = ts_builtin_sym_end;
	v->a[21763] = state(209);
	v->a[21764] = 2;
	v->a[21765] = sym_concatenation;
	v->a[21766] = aux_sym_for_statement_repeat1;
	v->a[21767] = state(337);
	v->a[21768] = 5;
	v->a[21769] = sym_arithmetic_expansion;
	v->a[21770] = sym_string;
	v->a[21771] = sym_simple_expansion;
	v->a[21772] = sym_expansion;
	v->a[21773] = sym_command_substitution;
	v->a[21774] = actions(487);
	v->a[21775] = 24;
	v->a[21776] = anon_sym_PIPE;
	v->a[21777] = anon_sym_SEMI_SEMI;
	v->a[21778] = anon_sym_AMP_AMP;
	v->a[21779] = anon_sym_PIPE_PIPE;
	small_parse_table_1089(v);
}

void	small_parse_table_1089(t_small_parse_table_array *v)
{
	v->a[21780] = anon_sym_LT;
	v->a[21781] = anon_sym_GT;
	v->a[21782] = anon_sym_GT_GT;
	v->a[21783] = anon_sym_LT_AMP;
	v->a[21784] = anon_sym_GT_AMP;
	v->a[21785] = anon_sym_GT_PIPE;
	v->a[21786] = anon_sym_LT_GT;
	v->a[21787] = anon_sym_LT_LT;
	v->a[21788] = anon_sym_LT_LT_DASH;
	v->a[21789] = aux_sym_heredoc_redirect_token1;
	v->a[21790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21791] = anon_sym_DOLLAR;
	v->a[21792] = anon_sym_DQUOTE;
	v->a[21793] = sym_raw_string;
	v->a[21794] = sym_number;
	v->a[21795] = anon_sym_DOLLAR_LBRACE;
	v->a[21796] = anon_sym_DOLLAR_LPAREN;
	v->a[21797] = anon_sym_BQUOTE;
	v->a[21798] = sym_word;
	v->a[21799] = anon_sym_SEMI;
	small_parse_table_1090(v);
}

/* EOF small_parse_table_217.c */
