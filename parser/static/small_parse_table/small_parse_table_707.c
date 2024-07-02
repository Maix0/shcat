/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_707.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3535(t_small_parse_table_array *v)
{
	v->a[70700] = 1;
	v->a[70701] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70702] = actions(823);
	v->a[70703] = 1;
	v->a[70704] = anon_sym_DOLLAR;
	v->a[70705] = actions(825);
	v->a[70706] = 1;
	v->a[70707] = anon_sym_DQUOTE;
	v->a[70708] = actions(827);
	v->a[70709] = 1;
	v->a[70710] = anon_sym_DOLLAR_LBRACE;
	v->a[70711] = actions(829);
	v->a[70712] = 1;
	v->a[70713] = anon_sym_DOLLAR_LPAREN;
	v->a[70714] = actions(831);
	v->a[70715] = 1;
	v->a[70716] = anon_sym_BQUOTE;
	v->a[70717] = state(296);
	v->a[70718] = 2;
	v->a[70719] = sym_concatenation;
	small_parse_table_3536(v);
}

void	small_parse_table_3536(t_small_parse_table_array *v)
{
	v->a[70720] = aux_sym_for_statement_repeat1;
	v->a[70721] = actions(919);
	v->a[70722] = 3;
	v->a[70723] = sym_raw_string;
	v->a[70724] = sym_number;
	v->a[70725] = sym_word;
	v->a[70726] = state(593);
	v->a[70727] = 5;
	v->a[70728] = sym_arithmetic_expansion;
	v->a[70729] = sym_string;
	v->a[70730] = sym_simple_expansion;
	v->a[70731] = sym_expansion;
	v->a[70732] = sym_command_substitution;
	v->a[70733] = 5;
	v->a[70734] = actions(680);
	v->a[70735] = 1;
	v->a[70736] = sym_comment;
	v->a[70737] = actions(2793);
	v->a[70738] = 1;
	v->a[70739] = sym_variable_name;
	small_parse_table_3537(v);
}

void	small_parse_table_3537(t_small_parse_table_array *v)
{
	v->a[70740] = state(1395);
	v->a[70741] = 2;
	v->a[70742] = sym_variable_assignment;
	v->a[70743] = aux_sym__variable_assignments_repeat1;
	v->a[70744] = actions(1980);
	v->a[70745] = 4;
	v->a[70746] = anon_sym_PIPE;
	v->a[70747] = anon_sym_LT;
	v->a[70748] = anon_sym_GT;
	v->a[70749] = anon_sym_LT_LT;
	v->a[70750] = actions(1982);
	v->a[70751] = 9;
	v->a[70752] = sym_file_descriptor;
	v->a[70753] = anon_sym_AMP_AMP;
	v->a[70754] = anon_sym_PIPE_PIPE;
	v->a[70755] = anon_sym_GT_GT;
	v->a[70756] = anon_sym_LT_AMP;
	v->a[70757] = anon_sym_GT_AMP;
	v->a[70758] = anon_sym_GT_PIPE;
	v->a[70759] = anon_sym_LT_GT;
	small_parse_table_3538(v);
}

void	small_parse_table_3538(t_small_parse_table_array *v)
{
	v->a[70760] = anon_sym_LT_LT_DASH;
	v->a[70761] = 3;
	v->a[70762] = actions(680);
	v->a[70763] = 1;
	v->a[70764] = sym_comment;
	v->a[70765] = actions(711);
	v->a[70766] = 4;
	v->a[70767] = anon_sym_PIPE;
	v->a[70768] = anon_sym_LT;
	v->a[70769] = anon_sym_GT;
	v->a[70770] = anon_sym_LT_LT;
	v->a[70771] = actions(713);
	v->a[70772] = 12;
	v->a[70773] = sym_file_descriptor;
	v->a[70774] = sym__concat;
	v->a[70775] = sym_variable_name;
	v->a[70776] = anon_sym_AMP_AMP;
	v->a[70777] = anon_sym_PIPE_PIPE;
	v->a[70778] = anon_sym_GT_GT;
	v->a[70779] = anon_sym_LT_AMP;
	small_parse_table_3539(v);
}

void	small_parse_table_3539(t_small_parse_table_array *v)
{
	v->a[70780] = anon_sym_GT_AMP;
	v->a[70781] = anon_sym_GT_PIPE;
	v->a[70782] = anon_sym_LT_GT;
	v->a[70783] = anon_sym_LT_LT_DASH;
	v->a[70784] = aux_sym_concatenation_token1;
	v->a[70785] = 3;
	v->a[70786] = actions(680);
	v->a[70787] = 1;
	v->a[70788] = sym_comment;
	v->a[70789] = actions(707);
	v->a[70790] = 4;
	v->a[70791] = anon_sym_PIPE;
	v->a[70792] = anon_sym_LT;
	v->a[70793] = anon_sym_GT;
	v->a[70794] = anon_sym_LT_LT;
	v->a[70795] = actions(709);
	v->a[70796] = 12;
	v->a[70797] = sym_file_descriptor;
	v->a[70798] = sym__concat;
	v->a[70799] = sym_variable_name;
	small_parse_table_3540(v);
}

/* EOF small_parse_table_707.c */
