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
	v->a[11800] = sym_string;
	v->a[11801] = sym_simple_expansion;
	v->a[11802] = sym_expansion;
	v->a[11803] = sym_command_substitution;
	v->a[11804] = actions(55);
	v->a[11805] = 8;
	v->a[11806] = anon_sym_LT;
	v->a[11807] = anon_sym_GT;
	v->a[11808] = anon_sym_GT_GT;
	v->a[11809] = anon_sym_AMP_GT;
	v->a[11810] = anon_sym_AMP_GT_GT;
	v->a[11811] = anon_sym_LT_AMP;
	v->a[11812] = anon_sym_GT_AMP;
	v->a[11813] = anon_sym_GT_PIPE;
	v->a[11814] = state(1141);
	v->a[11815] = 12;
	v->a[11816] = sym_redirected_statement;
	v->a[11817] = sym_for_statement;
	v->a[11818] = sym_while_statement;
	v->a[11819] = sym_if_statement;
	small_parse_table_591(v);
}

void	small_parse_table_591(t_small_parse_table_array *v)
{
	v->a[11820] = sym_case_statement;
	v->a[11821] = sym_function_definition;
	v->a[11822] = sym_compound_statement;
	v->a[11823] = sym_subshell;
	v->a[11824] = sym_list;
	v->a[11825] = sym_negated_command;
	v->a[11826] = sym_command;
	v->a[11827] = sym__variable_assignments;
	v->a[11828] = 32;
	v->a[11829] = actions(3);
	v->a[11830] = 1;
	v->a[11831] = sym_comment;
	v->a[11832] = actions(9);
	v->a[11833] = 1;
	v->a[11834] = anon_sym_for;
	v->a[11835] = actions(13);
	v->a[11836] = 1;
	v->a[11837] = anon_sym_if;
	v->a[11838] = actions(15);
	v->a[11839] = 1;
	small_parse_table_592(v);
}

void	small_parse_table_592(t_small_parse_table_array *v)
{
	v->a[11840] = anon_sym_case;
	v->a[11841] = actions(17);
	v->a[11842] = 1;
	v->a[11843] = anon_sym_LPAREN;
	v->a[11844] = actions(19);
	v->a[11845] = 1;
	v->a[11846] = anon_sym_LBRACE;
	v->a[11847] = actions(59);
	v->a[11848] = 1;
	v->a[11849] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11850] = actions(61);
	v->a[11851] = 1;
	v->a[11852] = anon_sym_DOLLAR;
	v->a[11853] = actions(63);
	v->a[11854] = 1;
	v->a[11855] = anon_sym_DQUOTE;
	v->a[11856] = actions(67);
	v->a[11857] = 1;
	v->a[11858] = anon_sym_DOLLAR_LBRACE;
	v->a[11859] = actions(69);
	small_parse_table_593(v);
}

void	small_parse_table_593(t_small_parse_table_array *v)
{
	v->a[11860] = 1;
	v->a[11861] = anon_sym_DOLLAR_LPAREN;
	v->a[11862] = actions(71);
	v->a[11863] = 1;
	v->a[11864] = anon_sym_BQUOTE;
	v->a[11865] = actions(73);
	v->a[11866] = 1;
	v->a[11867] = sym_file_descriptor;
	v->a[11868] = actions(75);
	v->a[11869] = 1;
	v->a[11870] = sym_variable_name;
	v->a[11871] = actions(234);
	v->a[11872] = 1;
	v->a[11873] = sym_word;
	v->a[11874] = actions(236);
	v->a[11875] = 1;
	v->a[11876] = anon_sym_BANG;
	v->a[11877] = state(129);
	v->a[11878] = 1;
	v->a[11879] = aux_sym__statements_repeat1;
	small_parse_table_594(v);
}

void	small_parse_table_594(t_small_parse_table_array *v)
{
	v->a[11880] = state(189);
	v->a[11881] = 1;
	v->a[11882] = sym_command_name;
	v->a[11883] = state(244);
	v->a[11884] = 1;
	v->a[11885] = sym_variable_assignment;
	v->a[11886] = state(624);
	v->a[11887] = 1;
	v->a[11888] = sym_concatenation;
	v->a[11889] = state(672);
	v->a[11890] = 1;
	v->a[11891] = aux_sym_command_repeat1;
	v->a[11892] = state(787);
	v->a[11893] = 1;
	v->a[11894] = sym_file_redirect;
	v->a[11895] = state(1176);
	v->a[11896] = 1;
	v->a[11897] = sym_pipeline;
	v->a[11898] = state(1207);
	v->a[11899] = 1;
	small_parse_table_595(v);
}

/* EOF small_parse_table_118.c */
