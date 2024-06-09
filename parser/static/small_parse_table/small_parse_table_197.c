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
	v->a[19700] = 1;
	v->a[19701] = anon_sym_LPAREN;
	v->a[19702] = actions(19);
	v->a[19703] = 1;
	v->a[19704] = anon_sym_LBRACE;
	v->a[19705] = actions(63);
	v->a[19706] = 1;
	v->a[19707] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19708] = actions(65);
	v->a[19709] = 1;
	v->a[19710] = anon_sym_DOLLAR;
	v->a[19711] = actions(67);
	v->a[19712] = 1;
	v->a[19713] = anon_sym_DQUOTE;
	v->a[19714] = actions(69);
	v->a[19715] = 1;
	v->a[19716] = sym_raw_string;
	v->a[19717] = actions(71);
	v->a[19718] = 1;
	v->a[19719] = aux_sym_number_token1;
	small_parse_table_986(v);
}

void	small_parse_table_986(t_small_parse_table_array *v)
{
	v->a[19720] = actions(73);
	v->a[19721] = 1;
	v->a[19722] = aux_sym_number_token2;
	v->a[19723] = actions(75);
	v->a[19724] = 1;
	v->a[19725] = anon_sym_DOLLAR_LBRACE;
	v->a[19726] = actions(77);
	v->a[19727] = 1;
	v->a[19728] = anon_sym_DOLLAR_LPAREN;
	v->a[19729] = actions(79);
	v->a[19730] = 1;
	v->a[19731] = anon_sym_BQUOTE;
	v->a[19732] = actions(81);
	v->a[19733] = 1;
	v->a[19734] = sym_file_descriptor;
	v->a[19735] = actions(83);
	v->a[19736] = 1;
	v->a[19737] = sym_variable_name;
	v->a[19738] = actions(238);
	v->a[19739] = 1;
	small_parse_table_987(v);
}

void	small_parse_table_987(t_small_parse_table_array *v)
{
	v->a[19740] = sym_word;
	v->a[19741] = actions(240);
	v->a[19742] = 1;
	v->a[19743] = anon_sym_BANG;
	v->a[19744] = state(185);
	v->a[19745] = 1;
	v->a[19746] = sym_command_name;
	v->a[19747] = state(286);
	v->a[19748] = 1;
	v->a[19749] = sym_variable_assignment;
	v->a[19750] = state(582);
	v->a[19751] = 1;
	v->a[19752] = sym_concatenation;
	v->a[19753] = state(614);
	v->a[19754] = 1;
	v->a[19755] = aux_sym_command_repeat1;
	v->a[19756] = state(769);
	v->a[19757] = 1;
	v->a[19758] = sym_file_redirect;
	v->a[19759] = state(1133);
	small_parse_table_988(v);
}

void	small_parse_table_988(t_small_parse_table_array *v)
{
	v->a[19760] = 1;
	v->a[19761] = aux_sym_redirected_statement_repeat2;
	v->a[19762] = state(1443);
	v->a[19763] = 1;
	v->a[19764] = sym_pipeline;
	v->a[19765] = actions(11);
	v->a[19766] = 2;
	v->a[19767] = anon_sym_while;
	v->a[19768] = anon_sym_until;
	v->a[19769] = actions(61);
	v->a[19770] = 2;
	v->a[19771] = anon_sym_LT_AMP_DASH;
	v->a[19772] = anon_sym_GT_AMP_DASH;
	v->a[19773] = state(397);
	v->a[19774] = 6;
	v->a[19775] = sym_arithmetic_expansion;
	v->a[19776] = sym_string;
	v->a[19777] = sym_number;
	v->a[19778] = sym_simple_expansion;
	v->a[19779] = sym_expansion;
	small_parse_table_989(v);
}

void	small_parse_table_989(t_small_parse_table_array *v)
{
	v->a[19780] = sym_command_substitution;
	v->a[19781] = actions(59);
	v->a[19782] = 8;
	v->a[19783] = anon_sym_LT;
	v->a[19784] = anon_sym_GT;
	v->a[19785] = anon_sym_GT_GT;
	v->a[19786] = anon_sym_AMP_GT;
	v->a[19787] = anon_sym_AMP_GT_GT;
	v->a[19788] = anon_sym_LT_AMP;
	v->a[19789] = anon_sym_GT_AMP;
	v->a[19790] = anon_sym_GT_PIPE;
	v->a[19791] = state(1007);
	v->a[19792] = 13;
	v->a[19793] = sym__statement_not_pipeline;
	v->a[19794] = sym_redirected_statement;
	v->a[19795] = sym_for_statement;
	v->a[19796] = sym_while_statement;
	v->a[19797] = sym_if_statement;
	v->a[19798] = sym_case_statement;
	v->a[19799] = sym_function_definition;
	small_parse_table_990(v);
}

/* EOF small_parse_table_197.c */
