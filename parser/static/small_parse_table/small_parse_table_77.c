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
	v->a[7700] = sym_string;
	v->a[7701] = sym_simple_expansion;
	v->a[7702] = sym_expansion;
	v->a[7703] = sym_command_substitution;
	v->a[7704] = state(820);
	v->a[7705] = 12;
	v->a[7706] = sym_redirected_statement;
	v->a[7707] = sym_for_statement;
	v->a[7708] = sym_while_statement;
	v->a[7709] = sym_if_statement;
	v->a[7710] = sym_case_statement;
	v->a[7711] = sym_function_definition;
	v->a[7712] = sym_compound_statement;
	v->a[7713] = sym_subshell;
	v->a[7714] = sym_list;
	v->a[7715] = sym_negated_command;
	v->a[7716] = sym_command;
	v->a[7717] = sym__variable_assignments;
	v->a[7718] = 30;
	v->a[7719] = actions(3);
	small_parse_table_386(v);
}

void	small_parse_table_386(t_small_parse_table_array *v)
{
	v->a[7720] = 1;
	v->a[7721] = sym_comment;
	v->a[7722] = actions(9);
	v->a[7723] = 1;
	v->a[7724] = anon_sym_for;
	v->a[7725] = actions(13);
	v->a[7726] = 1;
	v->a[7727] = anon_sym_if;
	v->a[7728] = actions(15);
	v->a[7729] = 1;
	v->a[7730] = anon_sym_case;
	v->a[7731] = actions(17);
	v->a[7732] = 1;
	v->a[7733] = anon_sym_LPAREN;
	v->a[7734] = actions(19);
	v->a[7735] = 1;
	v->a[7736] = anon_sym_LBRACE;
	v->a[7737] = actions(41);
	v->a[7738] = 1;
	v->a[7739] = sym_word;
	small_parse_table_387(v);
}

void	small_parse_table_387(t_small_parse_table_array *v)
{
	v->a[7740] = actions(49);
	v->a[7741] = 1;
	v->a[7742] = anon_sym_BANG;
	v->a[7743] = actions(53);
	v->a[7744] = 1;
	v->a[7745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7746] = actions(55);
	v->a[7747] = 1;
	v->a[7748] = anon_sym_DOLLAR;
	v->a[7749] = actions(57);
	v->a[7750] = 1;
	v->a[7751] = anon_sym_DQUOTE;
	v->a[7752] = actions(61);
	v->a[7753] = 1;
	v->a[7754] = anon_sym_DOLLAR_LBRACE;
	v->a[7755] = actions(63);
	v->a[7756] = 1;
	v->a[7757] = anon_sym_DOLLAR_LPAREN;
	v->a[7758] = actions(65);
	v->a[7759] = 1;
	small_parse_table_388(v);
}

void	small_parse_table_388(t_small_parse_table_array *v)
{
	v->a[7760] = anon_sym_BQUOTE;
	v->a[7761] = actions(67);
	v->a[7762] = 1;
	v->a[7763] = sym_variable_name;
	v->a[7764] = actions(230);
	v->a[7765] = 1;
	v->a[7766] = anon_sym_RBRACE;
	v->a[7767] = state(42);
	v->a[7768] = 1;
	v->a[7769] = aux_sym__terminated_statement;
	v->a[7770] = state(185);
	v->a[7771] = 1;
	v->a[7772] = sym_command_name;
	v->a[7773] = state(209);
	v->a[7774] = 1;
	v->a[7775] = sym_variable_assignment;
	v->a[7776] = state(411);
	v->a[7777] = 1;
	v->a[7778] = aux_sym_command_repeat1;
	v->a[7779] = state(551);
	small_parse_table_389(v);
}

void	small_parse_table_389(t_small_parse_table_array *v)
{
	v->a[7780] = 1;
	v->a[7781] = sym_file_redirect;
	v->a[7782] = state(555);
	v->a[7783] = 1;
	v->a[7784] = sym_concatenation;
	v->a[7785] = state(974);
	v->a[7786] = 1;
	v->a[7787] = sym_pipeline;
	v->a[7788] = state(1126);
	v->a[7789] = 1;
	v->a[7790] = aux_sym_redirected_statement_repeat2;
	v->a[7791] = state(1561);
	v->a[7792] = 1;
	v->a[7793] = sym__statement_not_pipeline;
	v->a[7794] = actions(11);
	v->a[7795] = 2;
	v->a[7796] = anon_sym_while;
	v->a[7797] = anon_sym_until;
	v->a[7798] = actions(59);
	v->a[7799] = 2;
	small_parse_table_390(v);
}

/* EOF small_parse_table_77.c */
