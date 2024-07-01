/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_808.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4040(t_small_parse_table_array *v)
{
	v->a[80800] = actions(888);
	v->a[80801] = 6;
	v->a[80802] = anon_sym_LT;
	v->a[80803] = anon_sym_GT;
	v->a[80804] = anon_sym_GT_GT;
	v->a[80805] = anon_sym_LT_AMP;
	v->a[80806] = anon_sym_GT_AMP;
	v->a[80807] = anon_sym_GT_PIPE;
	v->a[80808] = 8;
	v->a[80809] = actions(3);
	v->a[80810] = 1;
	v->a[80811] = sym_comment;
	v->a[80812] = actions(906);
	v->a[80813] = 1;
	v->a[80814] = sym_file_descriptor;
	v->a[80815] = actions(3142);
	v->a[80816] = 1;
	v->a[80817] = aux_sym_heredoc_redirect_token1;
	v->a[80818] = state(2144);
	v->a[80819] = 1;
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = sym__heredoc_expression;
	v->a[80821] = actions(886);
	v->a[80822] = 2;
	v->a[80823] = anon_sym_AMP_AMP;
	v->a[80824] = anon_sym_PIPE_PIPE;
	v->a[80825] = actions(890);
	v->a[80826] = 2;
	v->a[80827] = anon_sym_LT_AMP_DASH;
	v->a[80828] = anon_sym_GT_AMP_DASH;
	v->a[80829] = state(1670);
	v->a[80830] = 2;
	v->a[80831] = sym_file_redirect;
	v->a[80832] = aux_sym_redirected_statement_repeat2;
	v->a[80833] = actions(888);
	v->a[80834] = 6;
	v->a[80835] = anon_sym_LT;
	v->a[80836] = anon_sym_GT;
	v->a[80837] = anon_sym_GT_GT;
	v->a[80838] = anon_sym_LT_AMP;
	v->a[80839] = anon_sym_GT_AMP;
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = anon_sym_GT_PIPE;
	v->a[80841] = 10;
	v->a[80842] = actions(3);
	v->a[80843] = 1;
	v->a[80844] = sym_comment;
	v->a[80845] = actions(2758);
	v->a[80846] = 1;
	v->a[80847] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80848] = actions(2762);
	v->a[80849] = 1;
	v->a[80850] = anon_sym_DQUOTE;
	v->a[80851] = actions(2764);
	v->a[80852] = 1;
	v->a[80853] = anon_sym_DOLLAR_LBRACE;
	v->a[80854] = actions(2766);
	v->a[80855] = 1;
	v->a[80856] = anon_sym_DOLLAR_LPAREN;
	v->a[80857] = actions(2768);
	v->a[80858] = 1;
	v->a[80859] = anon_sym_BQUOTE;
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = actions(2925);
	v->a[80861] = 1;
	v->a[80862] = anon_sym_DOLLAR;
	v->a[80863] = state(2009);
	v->a[80864] = 1;
	v->a[80865] = sym_concatenation;
	v->a[80866] = actions(3144);
	v->a[80867] = 3;
	v->a[80868] = sym_raw_string;
	v->a[80869] = sym_number;
	v->a[80870] = sym_word;
	v->a[80871] = state(1942);
	v->a[80872] = 5;
	v->a[80873] = sym_arithmetic_expansion;
	v->a[80874] = sym_string;
	v->a[80875] = sym_simple_expansion;
	v->a[80876] = sym_expansion;
	v->a[80877] = sym_command_substitution;
	v->a[80878] = 6;
	v->a[80879] = actions(3);
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = 1;
	v->a[80881] = sym_comment;
	v->a[80882] = actions(3146);
	v->a[80883] = 1;
	v->a[80884] = anon_sym_RBRACE;
	v->a[80885] = actions(3148);
	v->a[80886] = 1;
	v->a[80887] = anon_sym_PERCENT;
	v->a[80888] = state(2308);
	v->a[80889] = 2;
	v->a[80890] = sym_expansion_expression;
	v->a[80891] = sym_expansion_regex;
	v->a[80892] = actions(3150);
	v->a[80893] = 3;
	v->a[80894] = sym__immediate_double_hash;
	v->a[80895] = anon_sym_POUND;
	v->a[80896] = anon_sym_PERCENT_PERCENT;
	v->a[80897] = actions(3152);
	v->a[80898] = 8;
	v->a[80899] = anon_sym_COLON_DASH;
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */
