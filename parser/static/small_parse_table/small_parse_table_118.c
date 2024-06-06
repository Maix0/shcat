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
	v->a[11800] = anon_sym_DOLLAR;
	v->a[11801] = actions(2309);
	v->a[11802] = 1;
	v->a[11803] = sym__special_character;
	v->a[11804] = actions(2311);
	v->a[11805] = 1;
	v->a[11806] = anon_sym_DQUOTE;
	v->a[11807] = actions(2313);
	v->a[11808] = 1;
	v->a[11809] = aux_sym_number_token1;
	v->a[11810] = actions(2315);
	v->a[11811] = 1;
	v->a[11812] = aux_sym_number_token2;
	v->a[11813] = actions(2317);
	v->a[11814] = 1;
	v->a[11815] = anon_sym_DOLLAR_LBRACE;
	v->a[11816] = actions(2319);
	v->a[11817] = 1;
	v->a[11818] = anon_sym_DOLLAR_LPAREN;
	v->a[11819] = actions(2321);
	small_parse_table_591(v);
}

void	small_parse_table_591(t_small_parse_table_array *v)
{
	v->a[11820] = 1;
	v->a[11821] = anon_sym_BQUOTE;
	v->a[11822] = actions(2323);
	v->a[11823] = 1;
	v->a[11824] = anon_sym_DOLLAR_BQUOTE;
	v->a[11825] = actions(2325);
	v->a[11826] = 1;
	v->a[11827] = sym_test_operator;
	v->a[11828] = actions(2327);
	v->a[11829] = 1;
	v->a[11830] = sym__brace_start;
	v->a[11831] = state(1321);
	v->a[11832] = 1;
	v->a[11833] = aux_sym__literal_repeat1;
	v->a[11834] = actions(2303);
	v->a[11835] = 2;
	v->a[11836] = sym_raw_string;
	v->a[11837] = sym_word;
	v->a[11838] = state(394);
	v->a[11839] = 2;
	small_parse_table_592(v);
}

void	small_parse_table_592(t_small_parse_table_array *v)
{
	v->a[11840] = sym_concatenation;
	v->a[11841] = aux_sym_for_statement_repeat1;
	v->a[11842] = actions(1182);
	v->a[11843] = 3;
	v->a[11844] = sym_file_descriptor;
	v->a[11845] = ts_builtin_sym_end;
	v->a[11846] = aux_sym_heredoc_redirect_token1;
	v->a[11847] = state(1153);
	v->a[11848] = 7;
	v->a[11849] = sym_arithmetic_expansion;
	v->a[11850] = sym_brace_expression;
	v->a[11851] = sym_string;
	v->a[11852] = sym_number;
	v->a[11853] = sym_simple_expansion;
	v->a[11854] = sym_expansion;
	v->a[11855] = sym_command_substitution;
	v->a[11856] = actions(1180);
	v->a[11857] = 19;
	v->a[11858] = anon_sym_PIPE;
	v->a[11859] = anon_sym_SEMI_SEMI;
	small_parse_table_593(v);
}

void	small_parse_table_593(t_small_parse_table_array *v)
{
	v->a[11860] = anon_sym_PIPE_AMP;
	v->a[11861] = anon_sym_AMP_AMP;
	v->a[11862] = anon_sym_PIPE_PIPE;
	v->a[11863] = anon_sym_LT;
	v->a[11864] = anon_sym_GT;
	v->a[11865] = anon_sym_GT_GT;
	v->a[11866] = anon_sym_AMP_GT;
	v->a[11867] = anon_sym_AMP_GT_GT;
	v->a[11868] = anon_sym_LT_AMP;
	v->a[11869] = anon_sym_GT_AMP;
	v->a[11870] = anon_sym_GT_PIPE;
	v->a[11871] = anon_sym_LT_AMP_DASH;
	v->a[11872] = anon_sym_GT_AMP_DASH;
	v->a[11873] = anon_sym_LT_LT;
	v->a[11874] = anon_sym_LT_LT_DASH;
	v->a[11875] = anon_sym_AMP;
	v->a[11876] = anon_sym_SEMI;
	v->a[11877] = 20;
	v->a[11878] = actions(3);
	v->a[11879] = 1;
	small_parse_table_594(v);
}

void	small_parse_table_594(t_small_parse_table_array *v)
{
	v->a[11880] = sym_comment;
	v->a[11881] = actions(2055);
	v->a[11882] = 1;
	v->a[11883] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11884] = actions(2058);
	v->a[11885] = 1;
	v->a[11886] = anon_sym_DOLLAR;
	v->a[11887] = actions(2064);
	v->a[11888] = 1;
	v->a[11889] = anon_sym_DQUOTE;
	v->a[11890] = actions(2067);
	v->a[11891] = 1;
	v->a[11892] = aux_sym_number_token1;
	v->a[11893] = actions(2070);
	v->a[11894] = 1;
	v->a[11895] = aux_sym_number_token2;
	v->a[11896] = actions(2073);
	v->a[11897] = 1;
	v->a[11898] = anon_sym_DOLLAR_LBRACE;
	v->a[11899] = actions(2076);
	small_parse_table_595(v);
}

/* EOF small_parse_table_118.c */
