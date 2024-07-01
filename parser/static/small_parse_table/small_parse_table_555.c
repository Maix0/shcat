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
	v->a[55500] = anon_sym_PIPE_PIPE;
	v->a[55501] = anon_sym_LT;
	v->a[55502] = anon_sym_GT;
	v->a[55503] = anon_sym_GT_GT;
	v->a[55504] = anon_sym_LT_AMP;
	v->a[55505] = anon_sym_GT_AMP;
	v->a[55506] = anon_sym_GT_PIPE;
	v->a[55507] = anon_sym_LT_AMP_DASH;
	v->a[55508] = anon_sym_GT_AMP_DASH;
	v->a[55509] = anon_sym_LT_LT;
	v->a[55510] = anon_sym_LT_LT_DASH;
	v->a[55511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55512] = aux_sym_concatenation_token1;
	v->a[55513] = anon_sym_DOLLAR;
	v->a[55514] = anon_sym_DQUOTE;
	v->a[55515] = sym_raw_string;
	v->a[55516] = sym_number;
	v->a[55517] = anon_sym_DOLLAR_LBRACE;
	v->a[55518] = anon_sym_DOLLAR_LPAREN;
	v->a[55519] = anon_sym_BQUOTE;
	small_parse_table_2776(v);
}

void	small_parse_table_2776(t_small_parse_table_array *v)
{
	v->a[55520] = sym_word;
	v->a[55521] = 15;
	v->a[55522] = actions(870);
	v->a[55523] = 1;
	v->a[55524] = sym_comment;
	v->a[55525] = actions(1921);
	v->a[55526] = 1;
	v->a[55527] = anon_sym_LPAREN;
	v->a[55528] = actions(1923);
	v->a[55529] = 1;
	v->a[55530] = anon_sym_BANG;
	v->a[55531] = actions(1929);
	v->a[55532] = 1;
	v->a[55533] = anon_sym_TILDE;
	v->a[55534] = actions(1931);
	v->a[55535] = 1;
	v->a[55536] = anon_sym_DOLLAR;
	v->a[55537] = actions(1933);
	v->a[55538] = 1;
	v->a[55539] = anon_sym_DQUOTE;
	small_parse_table_2777(v);
}

void	small_parse_table_2777(t_small_parse_table_array *v)
{
	v->a[55540] = actions(1937);
	v->a[55541] = 1;
	v->a[55542] = anon_sym_DOLLAR_LBRACE;
	v->a[55543] = actions(1939);
	v->a[55544] = 1;
	v->a[55545] = anon_sym_DOLLAR_LPAREN;
	v->a[55546] = actions(1941);
	v->a[55547] = 1;
	v->a[55548] = anon_sym_BQUOTE;
	v->a[55549] = actions(1943);
	v->a[55550] = 1;
	v->a[55551] = sym_variable_name;
	v->a[55552] = actions(1925);
	v->a[55553] = 2;
	v->a[55554] = anon_sym_PLUS_PLUS;
	v->a[55555] = anon_sym_DASH_DASH;
	v->a[55556] = actions(1927);
	v->a[55557] = 2;
	v->a[55558] = anon_sym_DASH2;
	v->a[55559] = anon_sym_PLUS2;
	small_parse_table_2778(v);
}

void	small_parse_table_2778(t_small_parse_table_array *v)
{
	v->a[55560] = actions(1935);
	v->a[55561] = 2;
	v->a[55562] = sym_number;
	v->a[55563] = aux_sym__simple_variable_name_token1;
	v->a[55564] = state(334);
	v->a[55565] = 3;
	v->a[55566] = sym_string;
	v->a[55567] = sym_simple_expansion;
	v->a[55568] = sym_expansion;
	v->a[55569] = state(337);
	v->a[55570] = 8;
	v->a[55571] = sym__arithmetic_expression;
	v->a[55572] = sym_arithmetic_literal;
	v->a[55573] = sym_arithmetic_binary_expression;
	v->a[55574] = sym_arithmetic_ternary_expression;
	v->a[55575] = sym_arithmetic_unary_expression;
	v->a[55576] = sym_arithmetic_postfix_expression;
	v->a[55577] = sym_arithmetic_parenthesized_expression;
	v->a[55578] = sym_command_substitution;
	v->a[55579] = 3;
	small_parse_table_2779(v);
}

void	small_parse_table_2779(t_small_parse_table_array *v)
{
	v->a[55580] = actions(3);
	v->a[55581] = 1;
	v->a[55582] = sym_comment;
	v->a[55583] = actions(1033);
	v->a[55584] = 3;
	v->a[55585] = sym_file_descriptor;
	v->a[55586] = sym__concat;
	v->a[55587] = sym__bare_dollar;
	v->a[55588] = actions(1031);
	v->a[55589] = 23;
	v->a[55590] = anon_sym_PIPE;
	v->a[55591] = anon_sym_AMP_AMP;
	v->a[55592] = anon_sym_PIPE_PIPE;
	v->a[55593] = anon_sym_LT;
	v->a[55594] = anon_sym_GT;
	v->a[55595] = anon_sym_GT_GT;
	v->a[55596] = anon_sym_LT_AMP;
	v->a[55597] = anon_sym_GT_AMP;
	v->a[55598] = anon_sym_GT_PIPE;
	v->a[55599] = anon_sym_LT_AMP_DASH;
	small_parse_table_2780(v);
}

/* EOF small_parse_table_555.c */
