/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_638.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3190(t_small_parse_table_array *v)
{
	v->a[63800] = actions(1887);
	v->a[63801] = 1;
	v->a[63802] = anon_sym_DOLLAR_LBRACE;
	v->a[63803] = actions(1889);
	v->a[63804] = 1;
	v->a[63805] = anon_sym_DOLLAR_LPAREN;
	v->a[63806] = actions(1891);
	v->a[63807] = 1;
	v->a[63808] = anon_sym_BQUOTE;
	v->a[63809] = actions(1893);
	v->a[63810] = 1;
	v->a[63811] = sym_variable_name;
	v->a[63812] = actions(1875);
	v->a[63813] = 2;
	v->a[63814] = anon_sym_PLUS_PLUS;
	v->a[63815] = anon_sym_DASH_DASH;
	v->a[63816] = actions(1877);
	v->a[63817] = 2;
	v->a[63818] = anon_sym_DASH2;
	v->a[63819] = anon_sym_PLUS2;
	small_parse_table_3191(v);
}

void	small_parse_table_3191(t_small_parse_table_array *v)
{
	v->a[63820] = actions(1885);
	v->a[63821] = 2;
	v->a[63822] = sym_number;
	v->a[63823] = aux_sym__simple_variable_name_token1;
	v->a[63824] = state(365);
	v->a[63825] = 3;
	v->a[63826] = sym_string;
	v->a[63827] = sym_simple_expansion;
	v->a[63828] = sym_expansion;
	v->a[63829] = state(345);
	v->a[63830] = 8;
	v->a[63831] = sym__arithmetic_expression;
	v->a[63832] = sym_arithmetic_literal;
	v->a[63833] = sym_arithmetic_binary_expression;
	v->a[63834] = sym_arithmetic_ternary_expression;
	v->a[63835] = sym_arithmetic_unary_expression;
	v->a[63836] = sym_arithmetic_postfix_expression;
	v->a[63837] = sym_arithmetic_parenthesized_expression;
	v->a[63838] = sym_command_substitution;
	v->a[63839] = 3;
	small_parse_table_3192(v);
}

void	small_parse_table_3192(t_small_parse_table_array *v)
{
	v->a[63840] = actions(3);
	v->a[63841] = 1;
	v->a[63842] = sym_comment;
	v->a[63843] = actions(1177);
	v->a[63844] = 5;
	v->a[63845] = sym_file_descriptor;
	v->a[63846] = sym__concat;
	v->a[63847] = sym_variable_name;
	v->a[63848] = ts_builtin_sym_end;
	v->a[63849] = aux_sym_heredoc_redirect_token1;
	v->a[63850] = actions(1179);
	v->a[63851] = 21;
	v->a[63852] = anon_sym_PIPE;
	v->a[63853] = anon_sym_RPAREN;
	v->a[63854] = anon_sym_SEMI_SEMI;
	v->a[63855] = anon_sym_AMP_AMP;
	v->a[63856] = anon_sym_PIPE_PIPE;
	v->a[63857] = anon_sym_LT;
	v->a[63858] = anon_sym_GT;
	v->a[63859] = anon_sym_GT_GT;
	small_parse_table_3193(v);
}

void	small_parse_table_3193(t_small_parse_table_array *v)
{
	v->a[63860] = anon_sym_AMP_GT;
	v->a[63861] = anon_sym_AMP_GT_GT;
	v->a[63862] = anon_sym_LT_AMP;
	v->a[63863] = anon_sym_GT_AMP;
	v->a[63864] = anon_sym_GT_PIPE;
	v->a[63865] = anon_sym_LT_AMP_DASH;
	v->a[63866] = anon_sym_GT_AMP_DASH;
	v->a[63867] = anon_sym_LT_LT;
	v->a[63868] = anon_sym_LT_LT_DASH;
	v->a[63869] = anon_sym_AMP;
	v->a[63870] = aux_sym_concatenation_token1;
	v->a[63871] = anon_sym_BQUOTE;
	v->a[63872] = anon_sym_SEMI;
	v->a[63873] = 6;
	v->a[63874] = actions(3);
	v->a[63875] = 1;
	v->a[63876] = sym_comment;
	v->a[63877] = actions(1004);
	v->a[63878] = 1;
	v->a[63879] = sym_file_descriptor;
	small_parse_table_3194(v);
}

void	small_parse_table_3194(t_small_parse_table_array *v)
{
	v->a[63880] = actions(1977);
	v->a[63881] = 1;
	v->a[63882] = aux_sym_concatenation_token1;
	v->a[63883] = actions(1980);
	v->a[63884] = 1;
	v->a[63885] = sym__concat;
	v->a[63886] = state(1099);
	v->a[63887] = 1;
	v->a[63888] = aux_sym_concatenation_repeat1;
	v->a[63889] = actions(999);
	v->a[63890] = 22;
	v->a[63891] = anon_sym_AMP_AMP;
	v->a[63892] = anon_sym_PIPE_PIPE;
	v->a[63893] = anon_sym_LT;
	v->a[63894] = anon_sym_GT;
	v->a[63895] = anon_sym_GT_GT;
	v->a[63896] = anon_sym_AMP_GT;
	v->a[63897] = anon_sym_AMP_GT_GT;
	v->a[63898] = anon_sym_LT_AMP;
	v->a[63899] = anon_sym_GT_AMP;
	small_parse_table_3195(v);
}

/* EOF small_parse_table_638.c */
