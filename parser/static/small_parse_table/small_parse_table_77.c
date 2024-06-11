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
	v->a[7700] = 1;
	v->a[7701] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7702] = actions(61);
	v->a[7703] = 1;
	v->a[7704] = anon_sym_DOLLAR;
	v->a[7705] = actions(63);
	v->a[7706] = 1;
	v->a[7707] = anon_sym_DQUOTE;
	v->a[7708] = actions(67);
	v->a[7709] = 1;
	v->a[7710] = anon_sym_DOLLAR_LBRACE;
	v->a[7711] = actions(69);
	v->a[7712] = 1;
	v->a[7713] = anon_sym_DOLLAR_LPAREN;
	v->a[7714] = actions(71);
	v->a[7715] = 1;
	v->a[7716] = anon_sym_BQUOTE;
	v->a[7717] = actions(73);
	v->a[7718] = 1;
	v->a[7719] = sym_file_descriptor;
	small_parse_table_386(v);
}

void	small_parse_table_386(t_small_parse_table_array *v)
{
	v->a[7720] = actions(75);
	v->a[7721] = 1;
	v->a[7722] = sym_variable_name;
	v->a[7723] = actions(236);
	v->a[7724] = 1;
	v->a[7725] = sym_word;
	v->a[7726] = actions(238);
	v->a[7727] = 1;
	v->a[7728] = anon_sym_BANG;
	v->a[7729] = state(140);
	v->a[7730] = 1;
	v->a[7731] = aux_sym__statements_repeat1;
	v->a[7732] = state(189);
	v->a[7733] = 1;
	v->a[7734] = sym_command_name;
	v->a[7735] = state(286);
	v->a[7736] = 1;
	v->a[7737] = sym_variable_assignment;
	v->a[7738] = state(647);
	v->a[7739] = 1;
	small_parse_table_387(v);
}

void	small_parse_table_387(t_small_parse_table_array *v)
{
	v->a[7740] = sym_concatenation;
	v->a[7741] = state(746);
	v->a[7742] = 1;
	v->a[7743] = aux_sym_command_repeat1;
	v->a[7744] = state(905);
	v->a[7745] = 1;
	v->a[7746] = sym_file_redirect;
	v->a[7747] = state(1422);
	v->a[7748] = 1;
	v->a[7749] = sym_pipeline;
	v->a[7750] = state(1429);
	v->a[7751] = 1;
	v->a[7752] = aux_sym_redirected_statement_repeat2;
	v->a[7753] = state(2271);
	v->a[7754] = 1;
	v->a[7755] = sym__statement_not_pipeline;
	v->a[7756] = state(2299);
	v->a[7757] = 1;
	v->a[7758] = sym__statements;
	v->a[7759] = actions(11);
	small_parse_table_388(v);
}

void	small_parse_table_388(t_small_parse_table_array *v)
{
	v->a[7760] = 2;
	v->a[7761] = anon_sym_while;
	v->a[7762] = anon_sym_until;
	v->a[7763] = actions(57);
	v->a[7764] = 2;
	v->a[7765] = anon_sym_LT_AMP_DASH;
	v->a[7766] = anon_sym_GT_AMP_DASH;
	v->a[7767] = actions(65);
	v->a[7768] = 2;
	v->a[7769] = sym_raw_string;
	v->a[7770] = sym_number;
	v->a[7771] = state(394);
	v->a[7772] = 5;
	v->a[7773] = sym_arithmetic_expansion;
	v->a[7774] = sym_string;
	v->a[7775] = sym_simple_expansion;
	v->a[7776] = sym_expansion;
	v->a[7777] = sym_command_substitution;
	v->a[7778] = actions(55);
	v->a[7779] = 8;
	small_parse_table_389(v);
}

void	small_parse_table_389(t_small_parse_table_array *v)
{
	v->a[7780] = anon_sym_LT;
	v->a[7781] = anon_sym_GT;
	v->a[7782] = anon_sym_GT_GT;
	v->a[7783] = anon_sym_AMP_GT;
	v->a[7784] = anon_sym_AMP_GT_GT;
	v->a[7785] = anon_sym_LT_AMP;
	v->a[7786] = anon_sym_GT_AMP;
	v->a[7787] = anon_sym_GT_PIPE;
	v->a[7788] = state(1211);
	v->a[7789] = 12;
	v->a[7790] = sym_redirected_statement;
	v->a[7791] = sym_for_statement;
	v->a[7792] = sym_while_statement;
	v->a[7793] = sym_if_statement;
	v->a[7794] = sym_case_statement;
	v->a[7795] = sym_function_definition;
	v->a[7796] = sym_compound_statement;
	v->a[7797] = sym_subshell;
	v->a[7798] = sym_list;
	v->a[7799] = sym_negated_command;
	small_parse_table_390(v);
}

/* EOF small_parse_table_77.c */
