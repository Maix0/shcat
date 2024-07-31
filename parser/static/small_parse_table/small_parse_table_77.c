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
	v->a[7700] = state(283);
	v->a[7701] = 1;
	v->a[7702] = sym_variable_assignment;
	v->a[7703] = state(486);
	v->a[7704] = 1;
	v->a[7705] = aux_sym_command_repeat1;
	v->a[7706] = state(602);
	v->a[7707] = 1;
	v->a[7708] = sym_concatenation;
	v->a[7709] = state(636);
	v->a[7710] = 1;
	v->a[7711] = sym_file_redirect;
	v->a[7712] = state(951);
	v->a[7713] = 1;
	v->a[7714] = sym_pipeline;
	v->a[7715] = state(1006);
	v->a[7716] = 1;
	v->a[7717] = aux_sym_redirected_statement_repeat2;
	v->a[7718] = state(1605);
	v->a[7719] = 1;
	small_parse_table_386(v);
}

void	small_parse_table_386(t_small_parse_table_array *v)
{
	v->a[7720] = sym__statement_not_pipeline;
	v->a[7721] = state(1648);
	v->a[7722] = 1;
	v->a[7723] = sym__statements;
	v->a[7724] = actions(11);
	v->a[7725] = 2;
	v->a[7726] = anon_sym_while;
	v->a[7727] = anon_sym_until;
	v->a[7728] = actions(59);
	v->a[7729] = 2;
	v->a[7730] = sym_raw_string;
	v->a[7731] = sym_number;
	v->a[7732] = state(425);
	v->a[7733] = 5;
	v->a[7734] = sym_arithmetic_expansion;
	v->a[7735] = sym_string;
	v->a[7736] = sym_simple_expansion;
	v->a[7737] = sym_expansion;
	v->a[7738] = sym_command_substitution;
	v->a[7739] = actions(51);
	small_parse_table_387(v);
}

void	small_parse_table_387(t_small_parse_table_array *v)
{
	v->a[7740] = 7;
	v->a[7741] = anon_sym_LT;
	v->a[7742] = anon_sym_GT;
	v->a[7743] = anon_sym_GT_GT;
	v->a[7744] = anon_sym_LT_AMP;
	v->a[7745] = anon_sym_GT_AMP;
	v->a[7746] = anon_sym_GT_PIPE;
	v->a[7747] = anon_sym_LT_GT;
	v->a[7748] = state(849);
	v->a[7749] = 12;
	v->a[7750] = sym_redirected_statement;
	v->a[7751] = sym_for_statement;
	v->a[7752] = sym_while_statement;
	v->a[7753] = sym_if_statement;
	v->a[7754] = sym_case_statement;
	v->a[7755] = sym_function_definition;
	v->a[7756] = sym_compound_statement;
	v->a[7757] = sym_subshell;
	v->a[7758] = sym_list;
	v->a[7759] = sym_negated_command;
	small_parse_table_388(v);
}

void	small_parse_table_388(t_small_parse_table_array *v)
{
	v->a[7760] = sym_command;
	v->a[7761] = sym__variable_assignments;
	v->a[7762] = 30;
	v->a[7763] = actions(3);
	v->a[7764] = 1;
	v->a[7765] = sym_comment;
	v->a[7766] = actions(9);
	v->a[7767] = 1;
	v->a[7768] = anon_sym_for;
	v->a[7769] = actions(13);
	v->a[7770] = 1;
	v->a[7771] = anon_sym_if;
	v->a[7772] = actions(15);
	v->a[7773] = 1;
	v->a[7774] = anon_sym_case;
	v->a[7775] = actions(17);
	v->a[7776] = 1;
	v->a[7777] = anon_sym_LPAREN;
	v->a[7778] = actions(19);
	v->a[7779] = 1;
	small_parse_table_389(v);
}

void	small_parse_table_389(t_small_parse_table_array *v)
{
	v->a[7780] = anon_sym_LBRACE;
	v->a[7781] = actions(53);
	v->a[7782] = 1;
	v->a[7783] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7784] = actions(55);
	v->a[7785] = 1;
	v->a[7786] = anon_sym_DOLLAR;
	v->a[7787] = actions(57);
	v->a[7788] = 1;
	v->a[7789] = anon_sym_DQUOTE;
	v->a[7790] = actions(61);
	v->a[7791] = 1;
	v->a[7792] = anon_sym_DOLLAR_LBRACE;
	v->a[7793] = actions(63);
	v->a[7794] = 1;
	v->a[7795] = anon_sym_DOLLAR_LPAREN;
	v->a[7796] = actions(65);
	v->a[7797] = 1;
	v->a[7798] = anon_sym_BQUOTE;
	v->a[7799] = actions(67);
	small_parse_table_390(v);
}

/* EOF small_parse_table_77.c */
