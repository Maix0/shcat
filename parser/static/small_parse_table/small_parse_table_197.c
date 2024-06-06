/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_197.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_985(t_small_parse_table_array *v)
{
	v->a[19700] = anon_sym_PIPE_PIPE;
	v->a[19701] = anon_sym_LT;
	v->a[19702] = anon_sym_GT;
	v->a[19703] = anon_sym_GT_GT;
	v->a[19704] = anon_sym_AMP_GT;
	v->a[19705] = anon_sym_AMP_GT_GT;
	v->a[19706] = anon_sym_LT_AMP;
	v->a[19707] = anon_sym_GT_AMP;
	v->a[19708] = anon_sym_GT_PIPE;
	v->a[19709] = anon_sym_LT_AMP_DASH;
	v->a[19710] = anon_sym_GT_AMP_DASH;
	v->a[19711] = anon_sym_LT_LT;
	v->a[19712] = anon_sym_LT_LT_DASH;
	v->a[19713] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19714] = anon_sym_DOLLAR;
	v->a[19715] = sym__special_character;
	v->a[19716] = anon_sym_DQUOTE;
	v->a[19717] = sym_raw_string;
	v->a[19718] = aux_sym_number_token1;
	v->a[19719] = aux_sym_number_token2;
	small_parse_table_986(v);
}

void	small_parse_table_986(t_small_parse_table_array *v)
{
	v->a[19720] = anon_sym_DOLLAR_LBRACE;
	v->a[19721] = anon_sym_DOLLAR_LPAREN;
	v->a[19722] = anon_sym_BQUOTE;
	v->a[19723] = anon_sym_DOLLAR_BQUOTE;
	v->a[19724] = sym_word;
	v->a[19725] = 29;
	v->a[19726] = actions(17);
	v->a[19727] = 1;
	v->a[19728] = anon_sym_LPAREN;
	v->a[19729] = actions(35);
	v->a[19730] = 1;
	v->a[19731] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19732] = actions(37);
	v->a[19733] = 1;
	v->a[19734] = anon_sym_DOLLAR;
	v->a[19735] = actions(41);
	v->a[19736] = 1;
	v->a[19737] = anon_sym_DQUOTE;
	v->a[19738] = actions(45);
	v->a[19739] = 1;
	small_parse_table_987(v);
}

void	small_parse_table_987(t_small_parse_table_array *v)
{
	v->a[19740] = aux_sym_number_token1;
	v->a[19741] = actions(47);
	v->a[19742] = 1;
	v->a[19743] = aux_sym_number_token2;
	v->a[19744] = actions(49);
	v->a[19745] = 1;
	v->a[19746] = anon_sym_DOLLAR_LBRACE;
	v->a[19747] = actions(51);
	v->a[19748] = 1;
	v->a[19749] = anon_sym_DOLLAR_LPAREN;
	v->a[19750] = actions(53);
	v->a[19751] = 1;
	v->a[19752] = anon_sym_BQUOTE;
	v->a[19753] = actions(55);
	v->a[19754] = 1;
	v->a[19755] = anon_sym_DOLLAR_BQUOTE;
	v->a[19756] = actions(57);
	v->a[19757] = 1;
	v->a[19758] = sym_comment;
	v->a[19759] = actions(61);
	small_parse_table_988(v);
}

void	small_parse_table_988(t_small_parse_table_array *v)
{
	v->a[19760] = 1;
	v->a[19761] = sym_variable_name;
	v->a[19762] = actions(63);
	v->a[19763] = 1;
	v->a[19764] = sym__brace_start;
	v->a[19765] = actions(2900);
	v->a[19766] = 1;
	v->a[19767] = sym_file_descriptor;
	v->a[19768] = actions(2902);
	v->a[19769] = 1;
	v->a[19770] = sym_word;
	v->a[19771] = actions(2904);
	v->a[19772] = 1;
	v->a[19773] = sym__special_character;
	v->a[19774] = state(280);
	v->a[19775] = 1;
	v->a[19776] = sym_command_name;
	v->a[19777] = state(998);
	v->a[19778] = 1;
	v->a[19779] = aux_sym_command_repeat1;
	small_parse_table_989(v);
}

void	small_parse_table_989(t_small_parse_table_array *v)
{
	v->a[19780] = state(1006);
	v->a[19781] = 1;
	v->a[19782] = aux_sym__literal_repeat1;
	v->a[19783] = state(1171);
	v->a[19784] = 1;
	v->a[19785] = sym_concatenation;
	v->a[19786] = state(1305);
	v->a[19787] = 1;
	v->a[19788] = sym_variable_assignment;
	v->a[19789] = state(1995);
	v->a[19790] = 1;
	v->a[19791] = sym_file_redirect;
	v->a[19792] = state(2168);
	v->a[19793] = 1;
	v->a[19794] = sym_subshell;
	v->a[19795] = state(2169);
	v->a[19796] = 1;
	v->a[19797] = sym_command;
	v->a[19798] = actions(43);
	v->a[19799] = 2;
	small_parse_table_990(v);
}

/* EOF small_parse_table_197.c */
