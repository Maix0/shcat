/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_818.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4090(t_small_parse_table_array *v)
{
	v->a[81800] = actions(1715);
	v->a[81801] = 1;
	v->a[81802] = anon_sym_DOLLAR_LBRACE;
	v->a[81803] = actions(1717);
	v->a[81804] = 1;
	v->a[81805] = anon_sym_DOLLAR_LPAREN;
	v->a[81806] = actions(1719);
	v->a[81807] = 1;
	v->a[81808] = anon_sym_BQUOTE;
	v->a[81809] = actions(3090);
	v->a[81810] = 1;
	v->a[81811] = sym__bare_dollar;
	v->a[81812] = actions(3088);
	v->a[81813] = 5;
	v->a[81814] = aux_sym_concatenation_token1;
	v->a[81815] = sym_raw_string;
	v->a[81816] = sym_number;
	v->a[81817] = sym__comment_word;
	v->a[81818] = sym_word;
	v->a[81819] = state(1017);
	small_parse_table_4091(v);
}

void	small_parse_table_4091(t_small_parse_table_array *v)
{
	v->a[81820] = 5;
	v->a[81821] = sym_arithmetic_expansion;
	v->a[81822] = sym_string;
	v->a[81823] = sym_simple_expansion;
	v->a[81824] = sym_expansion;
	v->a[81825] = sym_command_substitution;
	v->a[81826] = 6;
	v->a[81827] = actions(3);
	v->a[81828] = 1;
	v->a[81829] = sym_comment;
	v->a[81830] = actions(2695);
	v->a[81831] = 1;
	v->a[81832] = aux_sym_concatenation_token1;
	v->a[81833] = actions(3092);
	v->a[81834] = 1;
	v->a[81835] = sym__concat;
	v->a[81836] = state(1571);
	v->a[81837] = 1;
	v->a[81838] = aux_sym_concatenation_repeat1;
	v->a[81839] = actions(961);
	small_parse_table_4092(v);
}

void	small_parse_table_4092(t_small_parse_table_array *v)
{
	v->a[81840] = 2;
	v->a[81841] = sym_file_descriptor;
	v->a[81842] = aux_sym_heredoc_redirect_token1;
	v->a[81843] = actions(957);
	v->a[81844] = 12;
	v->a[81845] = anon_sym_AMP_AMP;
	v->a[81846] = anon_sym_PIPE_PIPE;
	v->a[81847] = anon_sym_LT;
	v->a[81848] = anon_sym_GT;
	v->a[81849] = anon_sym_GT_GT;
	v->a[81850] = anon_sym_AMP_GT;
	v->a[81851] = anon_sym_AMP_GT_GT;
	v->a[81852] = anon_sym_LT_AMP;
	v->a[81853] = anon_sym_GT_AMP;
	v->a[81854] = anon_sym_GT_PIPE;
	v->a[81855] = anon_sym_LT_AMP_DASH;
	v->a[81856] = anon_sym_GT_AMP_DASH;
	v->a[81857] = 10;
	v->a[81858] = actions(3);
	v->a[81859] = 1;
	small_parse_table_4093(v);
}

void	small_parse_table_4093(t_small_parse_table_array *v)
{
	v->a[81860] = sym_comment;
	v->a[81861] = actions(1709);
	v->a[81862] = 1;
	v->a[81863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81864] = actions(1713);
	v->a[81865] = 1;
	v->a[81866] = anon_sym_DQUOTE;
	v->a[81867] = actions(1715);
	v->a[81868] = 1;
	v->a[81869] = anon_sym_DOLLAR_LBRACE;
	v->a[81870] = actions(1717);
	v->a[81871] = 1;
	v->a[81872] = anon_sym_DOLLAR_LPAREN;
	v->a[81873] = actions(1719);
	v->a[81874] = 1;
	v->a[81875] = anon_sym_BQUOTE;
	v->a[81876] = actions(3090);
	v->a[81877] = 1;
	v->a[81878] = sym__bare_dollar;
	v->a[81879] = actions(3094);
	small_parse_table_4094(v);
}

void	small_parse_table_4094(t_small_parse_table_array *v)
{
	v->a[81880] = 1;
	v->a[81881] = anon_sym_DOLLAR;
	v->a[81882] = actions(3088);
	v->a[81883] = 5;
	v->a[81884] = aux_sym_concatenation_token1;
	v->a[81885] = sym_raw_string;
	v->a[81886] = sym_number;
	v->a[81887] = sym__comment_word;
	v->a[81888] = sym_word;
	v->a[81889] = state(1017);
	v->a[81890] = 5;
	v->a[81891] = sym_arithmetic_expansion;
	v->a[81892] = sym_string;
	v->a[81893] = sym_simple_expansion;
	v->a[81894] = sym_expansion;
	v->a[81895] = sym_command_substitution;
	v->a[81896] = 6;
	v->a[81897] = actions(3);
	v->a[81898] = 1;
	v->a[81899] = sym_comment;
	small_parse_table_4095(v);
}

/* EOF small_parse_table_818.c */
