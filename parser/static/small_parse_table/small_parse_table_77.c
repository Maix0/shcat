/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_77.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_385(t_small_parse_table_array *v)
{
	v->a[7700] = actions(61);
	v->a[7701] = 1;
	v->a[7702] = anon_sym_DOLLAR;
	v->a[7703] = actions(63);
	v->a[7704] = 1;
	v->a[7705] = anon_sym_DQUOTE;
	v->a[7706] = actions(67);
	v->a[7707] = 1;
	v->a[7708] = anon_sym_DOLLAR_LBRACE;
	v->a[7709] = actions(69);
	v->a[7710] = 1;
	v->a[7711] = anon_sym_DOLLAR_LPAREN;
	v->a[7712] = actions(71);
	v->a[7713] = 1;
	v->a[7714] = anon_sym_BQUOTE;
	v->a[7715] = actions(220);
	v->a[7716] = 1;
	v->a[7717] = sym_word;
	v->a[7718] = actions(222);
	v->a[7719] = 1;
	small_parse_table_386(v);
}

void	small_parse_table_386(t_small_parse_table_array *v)
{
	v->a[7720] = anon_sym_BANG;
	v->a[7721] = actions(230);
	v->a[7722] = 1;
	v->a[7723] = sym_file_descriptor;
	v->a[7724] = actions(232);
	v->a[7725] = 1;
	v->a[7726] = sym_variable_name;
	v->a[7727] = state(133);
	v->a[7728] = 1;
	v->a[7729] = aux_sym__statements_repeat1;
	v->a[7730] = state(180);
	v->a[7731] = 1;
	v->a[7732] = sym_command_name;
	v->a[7733] = state(231);
	v->a[7734] = 1;
	v->a[7735] = sym_variable_assignment;
	v->a[7736] = state(650);
	v->a[7737] = 1;
	v->a[7738] = sym_concatenation;
	v->a[7739] = state(710);
	small_parse_table_387(v);
}

void	small_parse_table_387(t_small_parse_table_array *v)
{
	v->a[7740] = 1;
	v->a[7741] = aux_sym_command_repeat1;
	v->a[7742] = state(750);
	v->a[7743] = 1;
	v->a[7744] = sym_file_redirect;
	v->a[7745] = state(1095);
	v->a[7746] = 1;
	v->a[7747] = sym_pipeline;
	v->a[7748] = state(1282);
	v->a[7749] = 1;
	v->a[7750] = aux_sym_redirected_statement_repeat2;
	v->a[7751] = state(2127);
	v->a[7752] = 1;
	v->a[7753] = sym__statement_not_pipeline;
	v->a[7754] = state(2168);
	v->a[7755] = 1;
	v->a[7756] = sym__statements;
	v->a[7757] = actions(11);
	v->a[7758] = 2;
	v->a[7759] = anon_sym_while;
	small_parse_table_388(v);
}

void	small_parse_table_388(t_small_parse_table_array *v)
{
	v->a[7760] = anon_sym_until;
	v->a[7761] = actions(226);
	v->a[7762] = 2;
	v->a[7763] = anon_sym_LT_AMP_DASH;
	v->a[7764] = anon_sym_GT_AMP_DASH;
	v->a[7765] = actions(228);
	v->a[7766] = 2;
	v->a[7767] = sym_raw_string;
	v->a[7768] = sym_number;
	v->a[7769] = state(382);
	v->a[7770] = 5;
	v->a[7771] = sym_arithmetic_expansion;
	v->a[7772] = sym_string;
	v->a[7773] = sym_simple_expansion;
	v->a[7774] = sym_expansion;
	v->a[7775] = sym_command_substitution;
	v->a[7776] = actions(224);
	v->a[7777] = 6;
	v->a[7778] = anon_sym_LT;
	v->a[7779] = anon_sym_GT;
	small_parse_table_389(v);
}

void	small_parse_table_389(t_small_parse_table_array *v)
{
	v->a[7780] = anon_sym_GT_GT;
	v->a[7781] = anon_sym_LT_AMP;
	v->a[7782] = anon_sym_GT_AMP;
	v->a[7783] = anon_sym_GT_PIPE;
	v->a[7784] = state(1087);
	v->a[7785] = 12;
	v->a[7786] = sym_redirected_statement;
	v->a[7787] = sym_for_statement;
	v->a[7788] = sym_while_statement;
	v->a[7789] = sym_if_statement;
	v->a[7790] = sym_case_statement;
	v->a[7791] = sym_function_definition;
	v->a[7792] = sym_compound_statement;
	v->a[7793] = sym_subshell;
	v->a[7794] = sym_list;
	v->a[7795] = sym_negated_command;
	v->a[7796] = sym_command;
	v->a[7797] = sym__variable_assignments;
	v->a[7798] = 32;
	v->a[7799] = actions(3);
	small_parse_table_390(v);
}

/* EOF small_parse_table_77.c */
