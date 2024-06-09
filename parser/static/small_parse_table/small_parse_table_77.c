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
	v->a[7701] = anon_sym_DOLLAR_LBRACE;
	v->a[7702] = actions(77);
	v->a[7703] = 1;
	v->a[7704] = anon_sym_DOLLAR_LPAREN;
	v->a[7705] = actions(79);
	v->a[7706] = 1;
	v->a[7707] = anon_sym_BQUOTE;
	v->a[7708] = actions(81);
	v->a[7709] = 1;
	v->a[7710] = sym_file_descriptor;
	v->a[7711] = actions(83);
	v->a[7712] = 1;
	v->a[7713] = sym_variable_name;
	v->a[7714] = actions(238);
	v->a[7715] = 1;
	v->a[7716] = sym_word;
	v->a[7717] = actions(240);
	v->a[7718] = 1;
	v->a[7719] = anon_sym_BANG;
	small_parse_table_386(v);
}

void	small_parse_table_386(t_small_parse_table_array *v)
{
	v->a[7720] = state(132);
	v->a[7721] = 1;
	v->a[7722] = aux_sym__statements_repeat1;
	v->a[7723] = state(185);
	v->a[7724] = 1;
	v->a[7725] = sym_command_name;
	v->a[7726] = state(297);
	v->a[7727] = 1;
	v->a[7728] = sym_variable_assignment;
	v->a[7729] = state(582);
	v->a[7730] = 1;
	v->a[7731] = sym_concatenation;
	v->a[7732] = state(614);
	v->a[7733] = 1;
	v->a[7734] = aux_sym_command_repeat1;
	v->a[7735] = state(769);
	v->a[7736] = 1;
	v->a[7737] = sym_file_redirect;
	v->a[7738] = state(1133);
	v->a[7739] = 1;
	small_parse_table_387(v);
}

void	small_parse_table_387(t_small_parse_table_array *v)
{
	v->a[7740] = aux_sym_redirected_statement_repeat2;
	v->a[7741] = state(1142);
	v->a[7742] = 1;
	v->a[7743] = sym_pipeline;
	v->a[7744] = state(2041);
	v->a[7745] = 1;
	v->a[7746] = sym__statement_not_pipeline;
	v->a[7747] = state(2230);
	v->a[7748] = 1;
	v->a[7749] = sym__statements;
	v->a[7750] = actions(11);
	v->a[7751] = 2;
	v->a[7752] = anon_sym_while;
	v->a[7753] = anon_sym_until;
	v->a[7754] = actions(61);
	v->a[7755] = 2;
	v->a[7756] = anon_sym_LT_AMP_DASH;
	v->a[7757] = anon_sym_GT_AMP_DASH;
	v->a[7758] = state(397);
	v->a[7759] = 6;
	small_parse_table_388(v);
}

void	small_parse_table_388(t_small_parse_table_array *v)
{
	v->a[7760] = sym_arithmetic_expansion;
	v->a[7761] = sym_string;
	v->a[7762] = sym_number;
	v->a[7763] = sym_simple_expansion;
	v->a[7764] = sym_expansion;
	v->a[7765] = sym_command_substitution;
	v->a[7766] = actions(59);
	v->a[7767] = 8;
	v->a[7768] = anon_sym_LT;
	v->a[7769] = anon_sym_GT;
	v->a[7770] = anon_sym_GT_GT;
	v->a[7771] = anon_sym_AMP_GT;
	v->a[7772] = anon_sym_AMP_GT_GT;
	v->a[7773] = anon_sym_LT_AMP;
	v->a[7774] = anon_sym_GT_AMP;
	v->a[7775] = anon_sym_GT_PIPE;
	v->a[7776] = state(1071);
	v->a[7777] = 12;
	v->a[7778] = sym_redirected_statement;
	v->a[7779] = sym_for_statement;
	small_parse_table_389(v);
}

void	small_parse_table_389(t_small_parse_table_array *v)
{
	v->a[7780] = sym_while_statement;
	v->a[7781] = sym_if_statement;
	v->a[7782] = sym_case_statement;
	v->a[7783] = sym_function_definition;
	v->a[7784] = sym_compound_statement;
	v->a[7785] = sym_subshell;
	v->a[7786] = sym_list;
	v->a[7787] = sym_negated_command;
	v->a[7788] = sym_command;
	v->a[7789] = sym_variable_assignments;
	v->a[7790] = 34;
	v->a[7791] = actions(3);
	v->a[7792] = 1;
	v->a[7793] = sym_comment;
	v->a[7794] = actions(9);
	v->a[7795] = 1;
	v->a[7796] = anon_sym_for;
	v->a[7797] = actions(13);
	v->a[7798] = 1;
	v->a[7799] = anon_sym_if;
	small_parse_table_390(v);
}

/* EOF small_parse_table_77.c */
