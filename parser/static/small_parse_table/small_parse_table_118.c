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
	v->a[11800] = sym_variable_name;
	v->a[11801] = actions(240);
	v->a[11802] = 1;
	v->a[11803] = sym_word;
	v->a[11804] = actions(242);
	v->a[11805] = 1;
	v->a[11806] = anon_sym_BANG;
	v->a[11807] = state(136);
	v->a[11808] = 1;
	v->a[11809] = aux_sym__statements_repeat1;
	v->a[11810] = state(188);
	v->a[11811] = 1;
	v->a[11812] = sym_command_name;
	v->a[11813] = state(297);
	v->a[11814] = 1;
	v->a[11815] = sym_variable_assignment;
	v->a[11816] = state(650);
	v->a[11817] = 1;
	v->a[11818] = sym_concatenation;
	v->a[11819] = state(749);
	small_parse_table_591(v);
}

void	small_parse_table_591(t_small_parse_table_array *v)
{
	v->a[11820] = 1;
	v->a[11821] = aux_sym_command_repeat1;
	v->a[11822] = state(795);
	v->a[11823] = 1;
	v->a[11824] = sym_file_redirect;
	v->a[11825] = state(1154);
	v->a[11826] = 1;
	v->a[11827] = sym_pipeline;
	v->a[11828] = state(1240);
	v->a[11829] = 1;
	v->a[11830] = aux_sym_redirected_statement_repeat2;
	v->a[11831] = state(2119);
	v->a[11832] = 1;
	v->a[11833] = sym__statement_not_pipeline;
	v->a[11834] = state(2313);
	v->a[11835] = 1;
	v->a[11836] = sym__statements;
	v->a[11837] = actions(11);
	v->a[11838] = 2;
	v->a[11839] = anon_sym_while;
	small_parse_table_592(v);
}

void	small_parse_table_592(t_small_parse_table_array *v)
{
	v->a[11840] = anon_sym_until;
	v->a[11841] = actions(57);
	v->a[11842] = 2;
	v->a[11843] = anon_sym_LT_AMP_DASH;
	v->a[11844] = anon_sym_GT_AMP_DASH;
	v->a[11845] = actions(65);
	v->a[11846] = 2;
	v->a[11847] = sym_raw_string;
	v->a[11848] = sym_number;
	v->a[11849] = state(443);
	v->a[11850] = 5;
	v->a[11851] = sym_arithmetic_expansion;
	v->a[11852] = sym_string;
	v->a[11853] = sym_simple_expansion;
	v->a[11854] = sym_expansion;
	v->a[11855] = sym_command_substitution;
	v->a[11856] = actions(55);
	v->a[11857] = 6;
	v->a[11858] = anon_sym_LT;
	v->a[11859] = anon_sym_GT;
	small_parse_table_593(v);
}

void	small_parse_table_593(t_small_parse_table_array *v)
{
	v->a[11860] = anon_sym_GT_GT;
	v->a[11861] = anon_sym_LT_AMP;
	v->a[11862] = anon_sym_GT_AMP;
	v->a[11863] = anon_sym_GT_PIPE;
	v->a[11864] = state(1030);
	v->a[11865] = 12;
	v->a[11866] = sym_redirected_statement;
	v->a[11867] = sym_for_statement;
	v->a[11868] = sym_while_statement;
	v->a[11869] = sym_if_statement;
	v->a[11870] = sym_case_statement;
	v->a[11871] = sym_function_definition;
	v->a[11872] = sym_compound_statement;
	v->a[11873] = sym_subshell;
	v->a[11874] = sym_list;
	v->a[11875] = sym_negated_command;
	v->a[11876] = sym_command;
	v->a[11877] = sym__variable_assignments;
	v->a[11878] = 32;
	v->a[11879] = actions(3);
	small_parse_table_594(v);
}

void	small_parse_table_594(t_small_parse_table_array *v)
{
	v->a[11880] = 1;
	v->a[11881] = sym_comment;
	v->a[11882] = actions(9);
	v->a[11883] = 1;
	v->a[11884] = anon_sym_for;
	v->a[11885] = actions(13);
	v->a[11886] = 1;
	v->a[11887] = anon_sym_if;
	v->a[11888] = actions(15);
	v->a[11889] = 1;
	v->a[11890] = anon_sym_case;
	v->a[11891] = actions(17);
	v->a[11892] = 1;
	v->a[11893] = anon_sym_LPAREN;
	v->a[11894] = actions(19);
	v->a[11895] = 1;
	v->a[11896] = anon_sym_LBRACE;
	v->a[11897] = actions(59);
	v->a[11898] = 1;
	v->a[11899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_595(v);
}

/* EOF small_parse_table_118.c */
