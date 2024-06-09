/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_555.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2775(t_small_parse_table_array *v)
{
	v->a[55500] = anon_sym_RPAREN_RPAREN;
	v->a[55501] = actions(1985);
	v->a[55502] = 2;
	v->a[55503] = anon_sym_PLUS_PLUS;
	v->a[55504] = anon_sym_DASH_DASH;
	v->a[55505] = actions(1987);
	v->a[55506] = 2;
	v->a[55507] = anon_sym_DASH2;
	v->a[55508] = anon_sym_PLUS2;
	v->a[55509] = state(530);
	v->a[55510] = 4;
	v->a[55511] = sym_string;
	v->a[55512] = sym_number;
	v->a[55513] = sym_simple_expansion;
	v->a[55514] = sym_expansion;
	v->a[55515] = state(550);
	v->a[55516] = 8;
	v->a[55517] = sym__arithmetic_expression;
	v->a[55518] = sym_arithmetic_literal;
	v->a[55519] = sym_arithmetic_binary_expression;
	small_parse_table_2776(v);
}

void	small_parse_table_2776(t_small_parse_table_array *v)
{
	v->a[55520] = sym_arithmetic_ternary_expression;
	v->a[55521] = sym_arithmetic_unary_expression;
	v->a[55522] = sym_arithmetic_postfix_expression;
	v->a[55523] = sym_arithmetic_parenthesized_expression;
	v->a[55524] = sym_command_substitution;
	v->a[55525] = 3;
	v->a[55526] = actions(3);
	v->a[55527] = 1;
	v->a[55528] = sym_comment;
	v->a[55529] = actions(1315);
	v->a[55530] = 3;
	v->a[55531] = sym_file_descriptor;
	v->a[55532] = sym__concat;
	v->a[55533] = sym_variable_name;
	v->a[55534] = actions(1313);
	v->a[55535] = 26;
	v->a[55536] = anon_sym_PIPE;
	v->a[55537] = anon_sym_AMP_AMP;
	v->a[55538] = anon_sym_PIPE_PIPE;
	v->a[55539] = anon_sym_LT;
	small_parse_table_2777(v);
}

void	small_parse_table_2777(t_small_parse_table_array *v)
{
	v->a[55540] = anon_sym_GT;
	v->a[55541] = anon_sym_GT_GT;
	v->a[55542] = anon_sym_AMP_GT;
	v->a[55543] = anon_sym_AMP_GT_GT;
	v->a[55544] = anon_sym_LT_AMP;
	v->a[55545] = anon_sym_GT_AMP;
	v->a[55546] = anon_sym_GT_PIPE;
	v->a[55547] = anon_sym_LT_AMP_DASH;
	v->a[55548] = anon_sym_GT_AMP_DASH;
	v->a[55549] = anon_sym_LT_LT;
	v->a[55550] = anon_sym_LT_LT_DASH;
	v->a[55551] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55552] = aux_sym_concatenation_token1;
	v->a[55553] = anon_sym_DOLLAR;
	v->a[55554] = anon_sym_DQUOTE;
	v->a[55555] = sym_raw_string;
	v->a[55556] = aux_sym_number_token1;
	v->a[55557] = aux_sym_number_token2;
	v->a[55558] = anon_sym_DOLLAR_LBRACE;
	v->a[55559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2778(v);
}

void	small_parse_table_2778(t_small_parse_table_array *v)
{
	v->a[55560] = anon_sym_BQUOTE;
	v->a[55561] = sym_word;
	v->a[55562] = 6;
	v->a[55563] = actions(3);
	v->a[55564] = 1;
	v->a[55565] = sym_comment;
	v->a[55566] = actions(1112);
	v->a[55567] = 1;
	v->a[55568] = sym_file_descriptor;
	v->a[55569] = actions(2051);
	v->a[55570] = 1;
	v->a[55571] = aux_sym_concatenation_token1;
	v->a[55572] = actions(2054);
	v->a[55573] = 1;
	v->a[55574] = sym__concat;
	v->a[55575] = state(842);
	v->a[55576] = 1;
	v->a[55577] = aux_sym_concatenation_repeat1;
	v->a[55578] = actions(1114);
	v->a[55579] = 25;
	small_parse_table_2779(v);
}

void	small_parse_table_2779(t_small_parse_table_array *v)
{
	v->a[55580] = anon_sym_PIPE;
	v->a[55581] = anon_sym_AMP_AMP;
	v->a[55582] = anon_sym_PIPE_PIPE;
	v->a[55583] = anon_sym_LT;
	v->a[55584] = anon_sym_GT;
	v->a[55585] = anon_sym_GT_GT;
	v->a[55586] = anon_sym_AMP_GT;
	v->a[55587] = anon_sym_AMP_GT_GT;
	v->a[55588] = anon_sym_LT_AMP;
	v->a[55589] = anon_sym_GT_AMP;
	v->a[55590] = anon_sym_GT_PIPE;
	v->a[55591] = anon_sym_LT_AMP_DASH;
	v->a[55592] = anon_sym_GT_AMP_DASH;
	v->a[55593] = anon_sym_LT_LT;
	v->a[55594] = anon_sym_LT_LT_DASH;
	v->a[55595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55596] = anon_sym_DOLLAR;
	v->a[55597] = anon_sym_DQUOTE;
	v->a[55598] = sym_raw_string;
	v->a[55599] = aux_sym_number_token1;
	small_parse_table_2780(v);
}

/* EOF small_parse_table_555.c */
