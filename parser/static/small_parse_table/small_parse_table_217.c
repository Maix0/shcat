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
	v->a[21700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21701] = actions(459);
	v->a[21702] = 1;
	v->a[21703] = anon_sym_DOLLAR;
	v->a[21704] = actions(461);
	v->a[21705] = 1;
	v->a[21706] = anon_sym_DQUOTE;
	v->a[21707] = actions(463);
	v->a[21708] = 1;
	v->a[21709] = aux_sym_number_token1;
	v->a[21710] = actions(465);
	v->a[21711] = 1;
	v->a[21712] = aux_sym_number_token2;
	v->a[21713] = actions(467);
	v->a[21714] = 1;
	v->a[21715] = anon_sym_DOLLAR_LBRACE;
	v->a[21716] = actions(469);
	v->a[21717] = 1;
	v->a[21718] = anon_sym_DOLLAR_LPAREN;
	v->a[21719] = actions(471);
	small_parse_table_1086(v);
}

void	small_parse_table_1086(t_small_parse_table_array *v)
{
	v->a[21720] = 1;
	v->a[21721] = anon_sym_BQUOTE;
	v->a[21722] = actions(475);
	v->a[21723] = 1;
	v->a[21724] = sym__bare_dollar;
	v->a[21725] = actions(517);
	v->a[21726] = 1;
	v->a[21727] = sym_file_descriptor;
	v->a[21728] = state(192);
	v->a[21729] = 1;
	v->a[21730] = aux_sym_command_repeat2;
	v->a[21731] = state(717);
	v->a[21732] = 1;
	v->a[21733] = sym_concatenation;
	v->a[21734] = state(1269);
	v->a[21735] = 1;
	v->a[21736] = sym_subshell;
	v->a[21737] = actions(453);
	v->a[21738] = 2;
	v->a[21739] = sym_raw_string;
	small_parse_table_1087(v);
}

void	small_parse_table_1087(t_small_parse_table_array *v)
{
	v->a[21740] = sym_word;
	v->a[21741] = state(358);
	v->a[21742] = 6;
	v->a[21743] = sym_arithmetic_expansion;
	v->a[21744] = sym_string;
	v->a[21745] = sym_number;
	v->a[21746] = sym_simple_expansion;
	v->a[21747] = sym_expansion;
	v->a[21748] = sym_command_substitution;
	v->a[21749] = actions(515);
	v->a[21750] = 20;
	v->a[21751] = anon_sym_esac;
	v->a[21752] = anon_sym_PIPE;
	v->a[21753] = anon_sym_SEMI_SEMI;
	v->a[21754] = anon_sym_AMP_AMP;
	v->a[21755] = anon_sym_PIPE_PIPE;
	v->a[21756] = anon_sym_LT;
	v->a[21757] = anon_sym_GT;
	v->a[21758] = anon_sym_GT_GT;
	v->a[21759] = anon_sym_AMP_GT;
	small_parse_table_1088(v);
}

void	small_parse_table_1088(t_small_parse_table_array *v)
{
	v->a[21760] = anon_sym_AMP_GT_GT;
	v->a[21761] = anon_sym_LT_AMP;
	v->a[21762] = anon_sym_GT_AMP;
	v->a[21763] = anon_sym_GT_PIPE;
	v->a[21764] = anon_sym_LT_AMP_DASH;
	v->a[21765] = anon_sym_GT_AMP_DASH;
	v->a[21766] = anon_sym_LT_LT;
	v->a[21767] = anon_sym_LT_LT_DASH;
	v->a[21768] = aux_sym_heredoc_redirect_token1;
	v->a[21769] = anon_sym_AMP;
	v->a[21770] = anon_sym_SEMI;
	v->a[21771] = 6;
	v->a[21772] = actions(3);
	v->a[21773] = 1;
	v->a[21774] = sym_comment;
	v->a[21775] = actions(433);
	v->a[21776] = 1;
	v->a[21777] = sym_variable_name;
	v->a[21778] = actions(413);
	v->a[21779] = 2;
	small_parse_table_1089(v);
}

void	small_parse_table_1089(t_small_parse_table_array *v)
{
	v->a[21780] = sym_file_descriptor;
	v->a[21781] = sym__bare_dollar;
	v->a[21782] = actions(431);
	v->a[21783] = 2;
	v->a[21784] = aux_sym__simple_variable_name_token1;
	v->a[21785] = aux_sym__multiline_variable_name_token1;
	v->a[21786] = actions(429);
	v->a[21787] = 9;
	v->a[21788] = anon_sym_BANG;
	v->a[21789] = anon_sym_DASH;
	v->a[21790] = anon_sym_STAR;
	v->a[21791] = anon_sym_QMARK;
	v->a[21792] = anon_sym_DOLLAR;
	v->a[21793] = anon_sym_POUND;
	v->a[21794] = anon_sym_AT;
	v->a[21795] = anon_sym_0;
	v->a[21796] = anon_sym__;
	v->a[21797] = actions(407);
	v->a[21798] = 28;
	v->a[21799] = anon_sym_PIPE;
	small_parse_table_1090(v);
}

/* EOF small_parse_table_217.c */
