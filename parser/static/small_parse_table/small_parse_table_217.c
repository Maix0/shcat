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
	v->a[21701] = anon_sym_DOLLAR;
	v->a[21702] = actions(501);
	v->a[21703] = 1;
	v->a[21704] = anon_sym_DQUOTE;
	v->a[21705] = actions(503);
	v->a[21706] = 1;
	v->a[21707] = anon_sym_DOLLAR_LBRACE;
	v->a[21708] = actions(505);
	v->a[21709] = 1;
	v->a[21710] = anon_sym_DOLLAR_LPAREN;
	v->a[21711] = actions(507);
	v->a[21712] = 1;
	v->a[21713] = anon_sym_BQUOTE;
	v->a[21714] = actions(509);
	v->a[21715] = 1;
	v->a[21716] = sym__bare_dollar;
	v->a[21717] = actions(547);
	v->a[21718] = 1;
	v->a[21719] = sym_file_descriptor;
	small_parse_table_1086(v);
}

void	small_parse_table_1086(t_small_parse_table_array *v)
{
	v->a[21720] = state(199);
	v->a[21721] = 1;
	v->a[21722] = aux_sym_command_repeat2;
	v->a[21723] = state(729);
	v->a[21724] = 1;
	v->a[21725] = sym_concatenation;
	v->a[21726] = actions(495);
	v->a[21727] = 3;
	v->a[21728] = sym_raw_string;
	v->a[21729] = sym_number;
	v->a[21730] = sym_word;
	v->a[21731] = state(334);
	v->a[21732] = 5;
	v->a[21733] = sym_arithmetic_expansion;
	v->a[21734] = sym_string;
	v->a[21735] = sym_simple_expansion;
	v->a[21736] = sym_expansion;
	v->a[21737] = sym_command_substitution;
	v->a[21738] = actions(545);
	v->a[21739] = 20;
	small_parse_table_1087(v);
}

void	small_parse_table_1087(t_small_parse_table_array *v)
{
	v->a[21740] = anon_sym_PIPE;
	v->a[21741] = anon_sym_RPAREN;
	v->a[21742] = anon_sym_SEMI_SEMI;
	v->a[21743] = anon_sym_AMP_AMP;
	v->a[21744] = anon_sym_PIPE_PIPE;
	v->a[21745] = anon_sym_LT;
	v->a[21746] = anon_sym_GT;
	v->a[21747] = anon_sym_GT_GT;
	v->a[21748] = anon_sym_AMP_GT;
	v->a[21749] = anon_sym_AMP_GT_GT;
	v->a[21750] = anon_sym_LT_AMP;
	v->a[21751] = anon_sym_GT_AMP;
	v->a[21752] = anon_sym_GT_PIPE;
	v->a[21753] = anon_sym_LT_AMP_DASH;
	v->a[21754] = anon_sym_GT_AMP_DASH;
	v->a[21755] = anon_sym_LT_LT;
	v->a[21756] = anon_sym_LT_LT_DASH;
	v->a[21757] = aux_sym_heredoc_redirect_token1;
	v->a[21758] = anon_sym_AMP;
	v->a[21759] = anon_sym_SEMI;
	small_parse_table_1088(v);
}

void	small_parse_table_1088(t_small_parse_table_array *v)
{
	v->a[21760] = 6;
	v->a[21761] = actions(3);
	v->a[21762] = 1;
	v->a[21763] = sym_comment;
	v->a[21764] = actions(553);
	v->a[21765] = 1;
	v->a[21766] = sym_variable_name;
	v->a[21767] = actions(379);
	v->a[21768] = 2;
	v->a[21769] = sym_file_descriptor;
	v->a[21770] = sym__bare_dollar;
	v->a[21771] = actions(551);
	v->a[21772] = 2;
	v->a[21773] = aux_sym__simple_variable_name_token1;
	v->a[21774] = aux_sym__multiline_variable_name_token1;
	v->a[21775] = actions(549);
	v->a[21776] = 9;
	v->a[21777] = anon_sym_BANG;
	v->a[21778] = anon_sym_DASH;
	v->a[21779] = anon_sym_STAR;
	small_parse_table_1089(v);
}

void	small_parse_table_1089(t_small_parse_table_array *v)
{
	v->a[21780] = anon_sym_QMARK;
	v->a[21781] = anon_sym_DOLLAR;
	v->a[21782] = anon_sym_POUND;
	v->a[21783] = anon_sym_AT;
	v->a[21784] = anon_sym_0;
	v->a[21785] = anon_sym__;
	v->a[21786] = actions(381);
	v->a[21787] = 24;
	v->a[21788] = anon_sym_LPAREN;
	v->a[21789] = anon_sym_PIPE;
	v->a[21790] = anon_sym_AMP_AMP;
	v->a[21791] = anon_sym_PIPE_PIPE;
	v->a[21792] = anon_sym_LT;
	v->a[21793] = anon_sym_GT;
	v->a[21794] = anon_sym_GT_GT;
	v->a[21795] = anon_sym_AMP_GT;
	v->a[21796] = anon_sym_AMP_GT_GT;
	v->a[21797] = anon_sym_LT_AMP;
	v->a[21798] = anon_sym_GT_AMP;
	v->a[21799] = anon_sym_GT_PIPE;
	small_parse_table_1090(v);
}

/* EOF small_parse_table_217.c */
