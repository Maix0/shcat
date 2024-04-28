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
	v->a[11800] = sym_herestring_redirect;
	v->a[11801] = state(5071);
	v->a[11802] = 2;
	v->a[11803] = sym_subshell;
	v->a[11804] = sym_test_command;
	v->a[11805] = actions(1390);
	v->a[11806] = 3;
	v->a[11807] = anon_sym_GT_GT;
	v->a[11808] = anon_sym_AMP_GT_GT;
	v->a[11809] = anon_sym_GT_PIPE;
	v->a[11810] = actions(1388);
	v->a[11811] = 5;
	v->a[11812] = anon_sym_LT;
	v->a[11813] = anon_sym_GT;
	v->a[11814] = anon_sym_AMP_GT;
	v->a[11815] = anon_sym_LT_AMP;
	v->a[11816] = anon_sym_GT_AMP;
	v->a[11817] = state(852);
	v->a[11818] = 9;
	v->a[11819] = sym_arithmetic_expansion;
	small_parse_table_591(v);
}

void	small_parse_table_591(t_small_parse_table_array *v)
{
	v->a[11820] = sym_brace_expression;
	v->a[11821] = sym_string;
	v->a[11822] = sym_translated_string;
	v->a[11823] = sym_number;
	v->a[11824] = sym_simple_expansion;
	v->a[11825] = sym_expansion;
	v->a[11826] = sym_command_substitution;
	v->a[11827] = sym_process_substitution;
	v->a[11828] = 21;
	v->a[11829] = actions(3);
	v->a[11830] = 1;
	v->a[11831] = sym_comment;
	v->a[11832] = actions(2979);
	v->a[11833] = 1;
	v->a[11834] = anon_sym_DOLLAR_LBRACK;
	v->a[11835] = actions(2982);
	v->a[11836] = 1;
	v->a[11837] = anon_sym_DOLLAR;
	v->a[11838] = actions(2985);
	v->a[11839] = 1;
	small_parse_table_592(v);
}

void	small_parse_table_592(t_small_parse_table_array *v)
{
	v->a[11840] = sym__special_character;
	v->a[11841] = actions(2988);
	v->a[11842] = 1;
	v->a[11843] = anon_sym_DQUOTE;
	v->a[11844] = actions(2991);
	v->a[11845] = 1;
	v->a[11846] = aux_sym_number_token1;
	v->a[11847] = actions(2994);
	v->a[11848] = 1;
	v->a[11849] = aux_sym_number_token2;
	v->a[11850] = actions(2997);
	v->a[11851] = 1;
	v->a[11852] = anon_sym_DOLLAR_LBRACE;
	v->a[11853] = actions(3000);
	v->a[11854] = 1;
	v->a[11855] = anon_sym_DOLLAR_LPAREN;
	v->a[11856] = actions(3003);
	v->a[11857] = 1;
	v->a[11858] = anon_sym_BQUOTE;
	v->a[11859] = actions(3006);
	small_parse_table_593(v);
}

void	small_parse_table_593(t_small_parse_table_array *v)
{
	v->a[11860] = 1;
	v->a[11861] = anon_sym_DOLLAR_BQUOTE;
	v->a[11862] = actions(3012);
	v->a[11863] = 1;
	v->a[11864] = sym_test_operator;
	v->a[11865] = actions(3015);
	v->a[11866] = 1;
	v->a[11867] = sym__brace_start;
	v->a[11868] = state(1801);
	v->a[11869] = 1;
	v->a[11870] = aux_sym__literal_repeat1;
	v->a[11871] = actions(2976);
	v->a[11872] = 2;
	v->a[11873] = anon_sym_LPAREN_LPAREN;
	v->a[11874] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11875] = actions(3009);
	v->a[11876] = 2;
	v->a[11877] = anon_sym_LT_LPAREN;
	v->a[11878] = anon_sym_GT_LPAREN;
	v->a[11879] = state(651);
	small_parse_table_594(v);
}

void	small_parse_table_594(t_small_parse_table_array *v)
{
	v->a[11880] = 2;
	v->a[11881] = sym_concatenation;
	v->a[11882] = aux_sym_for_statement_repeat1;
	v->a[11883] = actions(2973);
	v->a[11884] = 3;
	v->a[11885] = sym_raw_string;
	v->a[11886] = sym_ansi_c_string;
	v->a[11887] = sym_word;
	v->a[11888] = actions(2216);
	v->a[11889] = 4;
	v->a[11890] = sym_file_descriptor;
	v->a[11891] = sym_variable_name;
	v->a[11892] = ts_builtin_sym_end;
	v->a[11893] = aux_sym_heredoc_redirect_token1;
	v->a[11894] = state(1399);
	v->a[11895] = 9;
	v->a[11896] = sym_arithmetic_expansion;
	v->a[11897] = sym_brace_expression;
	v->a[11898] = sym_string;
	v->a[11899] = sym_translated_string;
	small_parse_table_595(v);
}

/* EOF small_parse_table_118.c */
