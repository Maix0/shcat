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
	v->a[50800] = aux_sym_concatenation_token1;
	v->a[50801] = actions(1868);
	v->a[50802] = 1;
	v->a[50803] = sym__concat;
	v->a[50804] = state(291);
	v->a[50805] = 1;
	v->a[50806] = aux_sym_concatenation_repeat1;
	v->a[50807] = actions(1127);
	v->a[50808] = 2;
	v->a[50809] = sym_file_descriptor;
	v->a[50810] = sym__bare_dollar;
	v->a[50811] = actions(1129);
	v->a[50812] = 27;
	v->a[50813] = anon_sym_LPAREN;
	v->a[50814] = anon_sym_PIPE;
	v->a[50815] = anon_sym_AMP_AMP;
	v->a[50816] = anon_sym_PIPE_PIPE;
	v->a[50817] = anon_sym_LT;
	v->a[50818] = anon_sym_GT;
	v->a[50819] = anon_sym_GT_GT;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = anon_sym_AMP_GT;
	v->a[50821] = anon_sym_AMP_GT_GT;
	v->a[50822] = anon_sym_LT_AMP;
	v->a[50823] = anon_sym_GT_AMP;
	v->a[50824] = anon_sym_GT_PIPE;
	v->a[50825] = anon_sym_LT_AMP_DASH;
	v->a[50826] = anon_sym_GT_AMP_DASH;
	v->a[50827] = anon_sym_LT_LT;
	v->a[50828] = anon_sym_LT_LT_DASH;
	v->a[50829] = aux_sym_heredoc_redirect_token1;
	v->a[50830] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50831] = anon_sym_DOLLAR;
	v->a[50832] = anon_sym_DQUOTE;
	v->a[50833] = sym_raw_string;
	v->a[50834] = aux_sym_number_token1;
	v->a[50835] = aux_sym_number_token2;
	v->a[50836] = anon_sym_DOLLAR_LBRACE;
	v->a[50837] = anon_sym_DOLLAR_LPAREN;
	v->a[50838] = anon_sym_BQUOTE;
	v->a[50839] = sym_word;
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = 7;
	v->a[50841] = actions(3);
	v->a[50842] = 1;
	v->a[50843] = sym_comment;
	v->a[50844] = actions(1081);
	v->a[50845] = 1;
	v->a[50846] = sym_file_descriptor;
	v->a[50847] = actions(1831);
	v->a[50848] = 1;
	v->a[50849] = sym_variable_name;
	v->a[50850] = state(1346);
	v->a[50851] = 2;
	v->a[50852] = sym_variable_assignment;
	v->a[50853] = aux_sym_variable_assignments_repeat1;
	v->a[50854] = state(1351);
	v->a[50855] = 3;
	v->a[50856] = sym_file_redirect;
	v->a[50857] = sym_heredoc_redirect;
	v->a[50858] = aux_sym_redirected_statement_repeat1;
	v->a[50859] = actions(1000);
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = 10;
	v->a[50861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50862] = anon_sym_DOLLAR;
	v->a[50863] = anon_sym_DQUOTE;
	v->a[50864] = sym_raw_string;
	v->a[50865] = aux_sym_number_token1;
	v->a[50866] = aux_sym_number_token2;
	v->a[50867] = anon_sym_DOLLAR_LBRACE;
	v->a[50868] = anon_sym_DOLLAR_LPAREN;
	v->a[50869] = anon_sym_BQUOTE;
	v->a[50870] = sym_word;
	v->a[50871] = actions(1002);
	v->a[50872] = 15;
	v->a[50873] = anon_sym_PIPE;
	v->a[50874] = anon_sym_AMP_AMP;
	v->a[50875] = anon_sym_PIPE_PIPE;
	v->a[50876] = anon_sym_LT;
	v->a[50877] = anon_sym_GT;
	v->a[50878] = anon_sym_GT_GT;
	v->a[50879] = anon_sym_AMP_GT;
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = anon_sym_AMP_GT_GT;
	v->a[50881] = anon_sym_LT_AMP;
	v->a[50882] = anon_sym_GT_AMP;
	v->a[50883] = anon_sym_GT_PIPE;
	v->a[50884] = anon_sym_LT_AMP_DASH;
	v->a[50885] = anon_sym_GT_AMP_DASH;
	v->a[50886] = anon_sym_LT_LT;
	v->a[50887] = anon_sym_LT_LT_DASH;
	v->a[50888] = 7;
	v->a[50889] = actions(3);
	v->a[50890] = 1;
	v->a[50891] = sym_comment;
	v->a[50892] = actions(1706);
	v->a[50893] = 1;
	v->a[50894] = sym_file_descriptor;
	v->a[50895] = actions(1709);
	v->a[50896] = 1;
	v->a[50897] = sym_variable_name;
	v->a[50898] = actions(1870);
	v->a[50899] = 1;
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
