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
	v->a[21700] = anon_sym_0;
	v->a[21701] = anon_sym__;
	v->a[21702] = actions(1239);
	v->a[21703] = 36;
	v->a[21704] = anon_sym_LPAREN_LPAREN;
	v->a[21705] = anon_sym_SEMI;
	v->a[21706] = anon_sym_PIPE_PIPE;
	v->a[21707] = anon_sym_AMP_AMP;
	v->a[21708] = anon_sym_PIPE;
	v->a[21709] = anon_sym_AMP;
	v->a[21710] = anon_sym_LT;
	v->a[21711] = anon_sym_GT;
	v->a[21712] = anon_sym_LT_LT;
	v->a[21713] = anon_sym_GT_GT;
	v->a[21714] = anon_sym_RPAREN;
	v->a[21715] = anon_sym_SEMI_SEMI;
	v->a[21716] = anon_sym_PIPE_AMP;
	v->a[21717] = anon_sym_AMP_GT;
	v->a[21718] = anon_sym_AMP_GT_GT;
	v->a[21719] = anon_sym_LT_AMP;
	small_parse_table_1086(v);
}

void	small_parse_table_1086(t_small_parse_table_array *v)
{
	v->a[21720] = anon_sym_GT_AMP;
	v->a[21721] = anon_sym_GT_PIPE;
	v->a[21722] = anon_sym_LT_AMP_DASH;
	v->a[21723] = anon_sym_GT_AMP_DASH;
	v->a[21724] = anon_sym_LT_LT_DASH;
	v->a[21725] = aux_sym_heredoc_redirect_token1;
	v->a[21726] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21727] = anon_sym_DOLLAR_LBRACK;
	v->a[21728] = sym__special_character;
	v->a[21729] = sym_raw_string;
	v->a[21730] = sym_ansi_c_string;
	v->a[21731] = aux_sym_number_token1;
	v->a[21732] = aux_sym_number_token2;
	v->a[21733] = anon_sym_DOLLAR_LBRACE;
	v->a[21734] = anon_sym_DOLLAR_LPAREN;
	v->a[21735] = anon_sym_BQUOTE;
	v->a[21736] = anon_sym_DOLLAR_BQUOTE;
	v->a[21737] = anon_sym_LT_LPAREN;
	v->a[21738] = anon_sym_GT_LPAREN;
	v->a[21739] = sym_word;
	small_parse_table_1087(v);
}

void	small_parse_table_1087(t_small_parse_table_array *v)
{
	v->a[21740] = 21;
	v->a[21741] = actions(3);
	v->a[21742] = 1;
	v->a[21743] = sym_comment;
	v->a[21744] = actions(3701);
	v->a[21745] = 1;
	v->a[21746] = anon_sym_DQUOTE;
	v->a[21747] = actions(3880);
	v->a[21748] = 1;
	v->a[21749] = anon_sym_DOLLAR_LBRACK;
	v->a[21750] = actions(3882);
	v->a[21751] = 1;
	v->a[21752] = anon_sym_DOLLAR;
	v->a[21753] = actions(3884);
	v->a[21754] = 1;
	v->a[21755] = sym__special_character;
	v->a[21756] = actions(3886);
	v->a[21757] = 1;
	v->a[21758] = aux_sym_number_token1;
	v->a[21759] = actions(3888);
	small_parse_table_1088(v);
}

void	small_parse_table_1088(t_small_parse_table_array *v)
{
	v->a[21760] = 1;
	v->a[21761] = aux_sym_number_token2;
	v->a[21762] = actions(3890);
	v->a[21763] = 1;
	v->a[21764] = anon_sym_DOLLAR_LBRACE;
	v->a[21765] = actions(3892);
	v->a[21766] = 1;
	v->a[21767] = anon_sym_DOLLAR_LPAREN;
	v->a[21768] = actions(3894);
	v->a[21769] = 1;
	v->a[21770] = anon_sym_BQUOTE;
	v->a[21771] = actions(3896);
	v->a[21772] = 1;
	v->a[21773] = anon_sym_DOLLAR_BQUOTE;
	v->a[21774] = actions(3900);
	v->a[21775] = 1;
	v->a[21776] = sym_test_operator;
	v->a[21777] = actions(3902);
	v->a[21778] = 1;
	v->a[21779] = sym__brace_start;
	small_parse_table_1089(v);
}

void	small_parse_table_1089(t_small_parse_table_array *v)
{
	v->a[21780] = state(2281);
	v->a[21781] = 1;
	v->a[21782] = aux_sym__literal_repeat1;
	v->a[21783] = actions(3878);
	v->a[21784] = 2;
	v->a[21785] = anon_sym_LPAREN_LPAREN;
	v->a[21786] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21787] = actions(3898);
	v->a[21788] = 2;
	v->a[21789] = anon_sym_LT_LPAREN;
	v->a[21790] = anon_sym_GT_LPAREN;
	v->a[21791] = state(747);
	v->a[21792] = 2;
	v->a[21793] = sym_concatenation;
	v->a[21794] = aux_sym_for_statement_repeat1;
	v->a[21795] = actions(2074);
	v->a[21796] = 3;
	v->a[21797] = sym_file_descriptor;
	v->a[21798] = ts_builtin_sym_end;
	v->a[21799] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1090(v);
}

/* EOF small_parse_table_217.c */
