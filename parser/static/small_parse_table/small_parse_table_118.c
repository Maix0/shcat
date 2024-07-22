/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_118.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_590(t_small_parse_table_array *v)
{
	v->a[11800] = anon_sym_LT;
	v->a[11801] = anon_sym_GT;
	v->a[11802] = anon_sym_GT_GT;
	v->a[11803] = anon_sym_LT_AMP;
	v->a[11804] = anon_sym_GT_AMP;
	v->a[11805] = anon_sym_GT_PIPE;
	v->a[11806] = anon_sym_LT_GT;
	v->a[11807] = state(989);
	v->a[11808] = 12;
	v->a[11809] = sym_redirected_statement;
	v->a[11810] = sym_for_statement;
	v->a[11811] = sym_while_statement;
	v->a[11812] = sym_if_statement;
	v->a[11813] = sym_case_statement;
	v->a[11814] = sym_function_definition;
	v->a[11815] = sym_compound_statement;
	v->a[11816] = sym_subshell;
	v->a[11817] = sym_list;
	v->a[11818] = sym_negated_command;
	v->a[11819] = sym_command;
	small_parse_table_591(v);
}

void	small_parse_table_591(t_small_parse_table_array *v)
{
	v->a[11820] = sym__variable_assignments;
	v->a[11821] = 31;
	v->a[11822] = actions(3);
	v->a[11823] = 1;
	v->a[11824] = sym_comment;
	v->a[11825] = actions(9);
	v->a[11826] = 1;
	v->a[11827] = anon_sym_for;
	v->a[11828] = actions(13);
	v->a[11829] = 1;
	v->a[11830] = anon_sym_if;
	v->a[11831] = actions(15);
	v->a[11832] = 1;
	v->a[11833] = anon_sym_case;
	v->a[11834] = actions(17);
	v->a[11835] = 1;
	v->a[11836] = anon_sym_LPAREN;
	v->a[11837] = actions(19);
	v->a[11838] = 1;
	v->a[11839] = anon_sym_LBRACE;
	small_parse_table_592(v);
}

void	small_parse_table_592(t_small_parse_table_array *v)
{
	v->a[11840] = actions(55);
	v->a[11841] = 1;
	v->a[11842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11843] = actions(57);
	v->a[11844] = 1;
	v->a[11845] = anon_sym_DOLLAR;
	v->a[11846] = actions(59);
	v->a[11847] = 1;
	v->a[11848] = anon_sym_DQUOTE;
	v->a[11849] = actions(63);
	v->a[11850] = 1;
	v->a[11851] = anon_sym_DOLLAR_LBRACE;
	v->a[11852] = actions(65);
	v->a[11853] = 1;
	v->a[11854] = anon_sym_DOLLAR_LPAREN;
	v->a[11855] = actions(67);
	v->a[11856] = 1;
	v->a[11857] = anon_sym_BQUOTE;
	v->a[11858] = actions(69);
	v->a[11859] = 1;
	small_parse_table_593(v);
}

void	small_parse_table_593(t_small_parse_table_array *v)
{
	v->a[11860] = sym_file_descriptor;
	v->a[11861] = actions(71);
	v->a[11862] = 1;
	v->a[11863] = sym_variable_name;
	v->a[11864] = actions(223);
	v->a[11865] = 1;
	v->a[11866] = sym_word;
	v->a[11867] = actions(225);
	v->a[11868] = 1;
	v->a[11869] = anon_sym_BANG;
	v->a[11870] = state(129);
	v->a[11871] = 1;
	v->a[11872] = aux_sym__statements_repeat1;
	v->a[11873] = state(178);
	v->a[11874] = 1;
	v->a[11875] = sym_command_name;
	v->a[11876] = state(339);
	v->a[11877] = 1;
	v->a[11878] = sym_variable_assignment;
	v->a[11879] = state(585);
	small_parse_table_594(v);
}

void	small_parse_table_594(t_small_parse_table_array *v)
{
	v->a[11880] = 1;
	v->a[11881] = aux_sym_command_repeat1;
	v->a[11882] = state(661);
	v->a[11883] = 1;
	v->a[11884] = sym_concatenation;
	v->a[11885] = state(774);
	v->a[11886] = 1;
	v->a[11887] = sym_file_redirect;
	v->a[11888] = state(1089);
	v->a[11889] = 1;
	v->a[11890] = sym_pipeline;
	v->a[11891] = state(1149);
	v->a[11892] = 1;
	v->a[11893] = aux_sym_redirected_statement_repeat2;
	v->a[11894] = state(1922);
	v->a[11895] = 1;
	v->a[11896] = sym__statement_not_pipeline;
	v->a[11897] = state(2050);
	v->a[11898] = 1;
	v->a[11899] = sym__statements;
	small_parse_table_595(v);
}

/* EOF small_parse_table_118.c */
