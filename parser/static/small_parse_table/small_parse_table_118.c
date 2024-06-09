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
	v->a[11800] = anon_sym_BQUOTE;
	v->a[11801] = actions(248);
	v->a[11802] = 1;
	v->a[11803] = sym_word;
	v->a[11804] = actions(250);
	v->a[11805] = 1;
	v->a[11806] = anon_sym_BANG;
	v->a[11807] = actions(256);
	v->a[11808] = 1;
	v->a[11809] = sym_raw_string;
	v->a[11810] = actions(258);
	v->a[11811] = 1;
	v->a[11812] = sym_file_descriptor;
	v->a[11813] = actions(260);
	v->a[11814] = 1;
	v->a[11815] = sym_variable_name;
	v->a[11816] = state(141);
	v->a[11817] = 1;
	v->a[11818] = aux_sym__statements_repeat1;
	v->a[11819] = state(175);
	small_parse_table_591(v);
}

void	small_parse_table_591(t_small_parse_table_array *v)
{
	v->a[11820] = 1;
	v->a[11821] = sym_command_name;
	v->a[11822] = state(278);
	v->a[11823] = 1;
	v->a[11824] = sym_variable_assignment;
	v->a[11825] = state(567);
	v->a[11826] = 1;
	v->a[11827] = aux_sym_command_repeat1;
	v->a[11828] = state(582);
	v->a[11829] = 1;
	v->a[11830] = sym_concatenation;
	v->a[11831] = state(693);
	v->a[11832] = 1;
	v->a[11833] = sym_file_redirect;
	v->a[11834] = state(1100);
	v->a[11835] = 1;
	v->a[11836] = sym_pipeline;
	v->a[11837] = state(1196);
	v->a[11838] = 1;
	v->a[11839] = aux_sym_redirected_statement_repeat2;
	small_parse_table_592(v);
}

void	small_parse_table_592(t_small_parse_table_array *v)
{
	v->a[11840] = state(2037);
	v->a[11841] = 1;
	v->a[11842] = sym__statement_not_pipeline;
	v->a[11843] = state(2255);
	v->a[11844] = 1;
	v->a[11845] = sym__statements;
	v->a[11846] = actions(11);
	v->a[11847] = 2;
	v->a[11848] = anon_sym_while;
	v->a[11849] = anon_sym_until;
	v->a[11850] = actions(254);
	v->a[11851] = 2;
	v->a[11852] = anon_sym_LT_AMP_DASH;
	v->a[11853] = anon_sym_GT_AMP_DASH;
	v->a[11854] = state(295);
	v->a[11855] = 6;
	v->a[11856] = sym_arithmetic_expansion;
	v->a[11857] = sym_string;
	v->a[11858] = sym_number;
	v->a[11859] = sym_simple_expansion;
	small_parse_table_593(v);
}

void	small_parse_table_593(t_small_parse_table_array *v)
{
	v->a[11860] = sym_expansion;
	v->a[11861] = sym_command_substitution;
	v->a[11862] = actions(252);
	v->a[11863] = 8;
	v->a[11864] = anon_sym_LT;
	v->a[11865] = anon_sym_GT;
	v->a[11866] = anon_sym_GT_GT;
	v->a[11867] = anon_sym_AMP_GT;
	v->a[11868] = anon_sym_AMP_GT_GT;
	v->a[11869] = anon_sym_LT_AMP;
	v->a[11870] = anon_sym_GT_AMP;
	v->a[11871] = anon_sym_GT_PIPE;
	v->a[11872] = state(1031);
	v->a[11873] = 12;
	v->a[11874] = sym_redirected_statement;
	v->a[11875] = sym_for_statement;
	v->a[11876] = sym_while_statement;
	v->a[11877] = sym_if_statement;
	v->a[11878] = sym_case_statement;
	v->a[11879] = sym_function_definition;
	small_parse_table_594(v);
}

void	small_parse_table_594(t_small_parse_table_array *v)
{
	v->a[11880] = sym_compound_statement;
	v->a[11881] = sym_subshell;
	v->a[11882] = sym_list;
	v->a[11883] = sym_negated_command;
	v->a[11884] = sym_command;
	v->a[11885] = sym_variable_assignments;
	v->a[11886] = 34;
	v->a[11887] = actions(3);
	v->a[11888] = 1;
	v->a[11889] = sym_comment;
	v->a[11890] = actions(9);
	v->a[11891] = 1;
	v->a[11892] = anon_sym_for;
	v->a[11893] = actions(13);
	v->a[11894] = 1;
	v->a[11895] = anon_sym_if;
	v->a[11896] = actions(15);
	v->a[11897] = 1;
	v->a[11898] = anon_sym_case;
	v->a[11899] = actions(17);
	small_parse_table_595(v);
}

/* EOF small_parse_table_118.c */
