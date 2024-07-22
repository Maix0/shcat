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
	v->a[7700] = sym_simple_expansion;
	v->a[7701] = sym_expansion;
	v->a[7702] = sym_command_substitution;
	v->a[7703] = actions(53);
	v->a[7704] = 7;
	v->a[7705] = anon_sym_LT;
	v->a[7706] = anon_sym_GT;
	v->a[7707] = anon_sym_GT_GT;
	v->a[7708] = anon_sym_LT_AMP;
	v->a[7709] = anon_sym_GT_AMP;
	v->a[7710] = anon_sym_GT_PIPE;
	v->a[7711] = anon_sym_LT_GT;
	v->a[7712] = state(1090);
	v->a[7713] = 12;
	v->a[7714] = sym_redirected_statement;
	v->a[7715] = sym_for_statement;
	v->a[7716] = sym_while_statement;
	v->a[7717] = sym_if_statement;
	v->a[7718] = sym_case_statement;
	v->a[7719] = sym_function_definition;
	small_parse_table_386(v);
}

void	small_parse_table_386(t_small_parse_table_array *v)
{
	v->a[7720] = sym_compound_statement;
	v->a[7721] = sym_subshell;
	v->a[7722] = sym_list;
	v->a[7723] = sym_negated_command;
	v->a[7724] = sym_command;
	v->a[7725] = sym__variable_assignments;
	v->a[7726] = 31;
	v->a[7727] = actions(3);
	v->a[7728] = 1;
	v->a[7729] = sym_comment;
	v->a[7730] = actions(9);
	v->a[7731] = 1;
	v->a[7732] = anon_sym_for;
	v->a[7733] = actions(13);
	v->a[7734] = 1;
	v->a[7735] = anon_sym_if;
	v->a[7736] = actions(15);
	v->a[7737] = 1;
	v->a[7738] = anon_sym_case;
	v->a[7739] = actions(17);
	small_parse_table_387(v);
}

void	small_parse_table_387(t_small_parse_table_array *v)
{
	v->a[7740] = 1;
	v->a[7741] = anon_sym_LPAREN;
	v->a[7742] = actions(19);
	v->a[7743] = 1;
	v->a[7744] = anon_sym_LBRACE;
	v->a[7745] = actions(43);
	v->a[7746] = 1;
	v->a[7747] = sym_word;
	v->a[7748] = actions(51);
	v->a[7749] = 1;
	v->a[7750] = anon_sym_BANG;
	v->a[7751] = actions(55);
	v->a[7752] = 1;
	v->a[7753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7754] = actions(57);
	v->a[7755] = 1;
	v->a[7756] = anon_sym_DOLLAR;
	v->a[7757] = actions(59);
	v->a[7758] = 1;
	v->a[7759] = anon_sym_DQUOTE;
	small_parse_table_388(v);
}

void	small_parse_table_388(t_small_parse_table_array *v)
{
	v->a[7760] = actions(63);
	v->a[7761] = 1;
	v->a[7762] = anon_sym_DOLLAR_LBRACE;
	v->a[7763] = actions(65);
	v->a[7764] = 1;
	v->a[7765] = anon_sym_DOLLAR_LPAREN;
	v->a[7766] = actions(67);
	v->a[7767] = 1;
	v->a[7768] = anon_sym_BQUOTE;
	v->a[7769] = actions(69);
	v->a[7770] = 1;
	v->a[7771] = sym_file_descriptor;
	v->a[7772] = actions(71);
	v->a[7773] = 1;
	v->a[7774] = sym_variable_name;
	v->a[7775] = actions(243);
	v->a[7776] = 1;
	v->a[7777] = anon_sym_done;
	v->a[7778] = state(36);
	v->a[7779] = 1;
	small_parse_table_389(v);
}

void	small_parse_table_389(t_small_parse_table_array *v)
{
	v->a[7780] = aux_sym__terminated_statement;
	v->a[7781] = state(183);
	v->a[7782] = 1;
	v->a[7783] = sym_command_name;
	v->a[7784] = state(327);
	v->a[7785] = 1;
	v->a[7786] = sym_variable_assignment;
	v->a[7787] = state(655);
	v->a[7788] = 1;
	v->a[7789] = aux_sym_command_repeat1;
	v->a[7790] = state(661);
	v->a[7791] = 1;
	v->a[7792] = sym_concatenation;
	v->a[7793] = state(665);
	v->a[7794] = 1;
	v->a[7795] = sym_file_redirect;
	v->a[7796] = state(1142);
	v->a[7797] = 1;
	v->a[7798] = sym_pipeline;
	v->a[7799] = state(1198);
	small_parse_table_390(v);
}

/* EOF small_parse_table_77.c */
