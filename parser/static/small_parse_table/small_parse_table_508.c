/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_508.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2540(t_small_parse_table_array *v)
{
	v->a[50800] = aux_sym__variable_assignments_repeat1;
	v->a[50801] = state(1559);
	v->a[50802] = 3;
	v->a[50803] = sym_file_redirect;
	v->a[50804] = sym_heredoc_redirect;
	v->a[50805] = aux_sym_redirected_statement_repeat1;
	v->a[50806] = actions(809);
	v->a[50807] = 4;
	v->a[50808] = anon_sym_AMP_AMP;
	v->a[50809] = anon_sym_PIPE_PIPE;
	v->a[50810] = anon_sym_LT_LT;
	v->a[50811] = anon_sym_LT_LT_DASH;
	v->a[50812] = actions(805);
	v->a[50813] = 19;
	v->a[50814] = anon_sym_LT;
	v->a[50815] = anon_sym_GT;
	v->a[50816] = anon_sym_GT_GT;
	v->a[50817] = anon_sym_AMP_GT;
	v->a[50818] = anon_sym_AMP_GT_GT;
	v->a[50819] = anon_sym_LT_AMP;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = anon_sym_GT_AMP;
	v->a[50821] = anon_sym_GT_PIPE;
	v->a[50822] = anon_sym_LT_AMP_DASH;
	v->a[50823] = anon_sym_GT_AMP_DASH;
	v->a[50824] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50825] = anon_sym_DOLLAR;
	v->a[50826] = anon_sym_DQUOTE;
	v->a[50827] = sym_raw_string;
	v->a[50828] = sym_number;
	v->a[50829] = anon_sym_DOLLAR_LBRACE;
	v->a[50830] = anon_sym_DOLLAR_LPAREN;
	v->a[50831] = anon_sym_BQUOTE;
	v->a[50832] = sym_word;
	v->a[50833] = 6;
	v->a[50834] = actions(3);
	v->a[50835] = 1;
	v->a[50836] = sym_comment;
	v->a[50837] = actions(989);
	v->a[50838] = 1;
	v->a[50839] = aux_sym_concatenation_token1;
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = actions(993);
	v->a[50841] = 1;
	v->a[50842] = sym__concat;
	v->a[50843] = state(826);
	v->a[50844] = 1;
	v->a[50845] = aux_sym_concatenation_repeat1;
	v->a[50846] = actions(991);
	v->a[50847] = 2;
	v->a[50848] = sym_file_descriptor;
	v->a[50849] = sym__bare_dollar;
	v->a[50850] = actions(984);
	v->a[50851] = 26;
	v->a[50852] = anon_sym_LPAREN;
	v->a[50853] = anon_sym_PIPE;
	v->a[50854] = anon_sym_AMP_AMP;
	v->a[50855] = anon_sym_PIPE_PIPE;
	v->a[50856] = anon_sym_LT;
	v->a[50857] = anon_sym_GT;
	v->a[50858] = anon_sym_GT_GT;
	v->a[50859] = anon_sym_AMP_GT;
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = anon_sym_AMP_GT_GT;
	v->a[50861] = anon_sym_LT_AMP;
	v->a[50862] = anon_sym_GT_AMP;
	v->a[50863] = anon_sym_GT_PIPE;
	v->a[50864] = anon_sym_LT_AMP_DASH;
	v->a[50865] = anon_sym_GT_AMP_DASH;
	v->a[50866] = anon_sym_LT_LT;
	v->a[50867] = anon_sym_LT_LT_DASH;
	v->a[50868] = aux_sym_heredoc_redirect_token1;
	v->a[50869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50870] = anon_sym_DOLLAR;
	v->a[50871] = anon_sym_DQUOTE;
	v->a[50872] = sym_raw_string;
	v->a[50873] = sym_number;
	v->a[50874] = anon_sym_DOLLAR_LBRACE;
	v->a[50875] = anon_sym_DOLLAR_LPAREN;
	v->a[50876] = anon_sym_BQUOTE;
	v->a[50877] = sym_word;
	v->a[50878] = 7;
	v->a[50879] = actions(3);
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = 1;
	v->a[50881] = sym_comment;
	v->a[50882] = actions(1565);
	v->a[50883] = 1;
	v->a[50884] = sym_file_descriptor;
	v->a[50885] = actions(1568);
	v->a[50886] = 1;
	v->a[50887] = sym_variable_name;
	v->a[50888] = actions(1671);
	v->a[50889] = 1;
	v->a[50890] = anon_sym_RPAREN;
	v->a[50891] = actions(1558);
	v->a[50892] = 9;
	v->a[50893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50894] = anon_sym_DOLLAR;
	v->a[50895] = anon_sym_DQUOTE;
	v->a[50896] = sym_raw_string;
	v->a[50897] = sym_number;
	v->a[50898] = anon_sym_DOLLAR_LBRACE;
	v->a[50899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
