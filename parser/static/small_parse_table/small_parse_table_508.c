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
	v->a[50800] = anon_sym_GT_GT;
	v->a[50801] = anon_sym_AMP_GT;
	v->a[50802] = anon_sym_AMP_GT_GT;
	v->a[50803] = anon_sym_LT_AMP;
	v->a[50804] = anon_sym_GT_AMP;
	v->a[50805] = anon_sym_GT_PIPE;
	v->a[50806] = anon_sym_LT_AMP_DASH;
	v->a[50807] = anon_sym_GT_AMP_DASH;
	v->a[50808] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50809] = anon_sym_DOLLAR;
	v->a[50810] = anon_sym_DQUOTE;
	v->a[50811] = sym_raw_string;
	v->a[50812] = sym_number;
	v->a[50813] = anon_sym_DOLLAR_LBRACE;
	v->a[50814] = anon_sym_DOLLAR_LPAREN;
	v->a[50815] = anon_sym_BQUOTE;
	v->a[50816] = sym_word;
	v->a[50817] = 5;
	v->a[50818] = actions(3);
	v->a[50819] = 1;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = sym_comment;
	v->a[50821] = actions(774);
	v->a[50822] = 1;
	v->a[50823] = sym_variable_name;
	v->a[50824] = actions(1592);
	v->a[50825] = 1;
	v->a[50826] = sym_file_descriptor;
	v->a[50827] = actions(762);
	v->a[50828] = 8;
	v->a[50829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50830] = anon_sym_DOLLAR;
	v->a[50831] = anon_sym_DQUOTE;
	v->a[50832] = sym_raw_string;
	v->a[50833] = sym_number;
	v->a[50834] = anon_sym_DOLLAR_LBRACE;
	v->a[50835] = anon_sym_DOLLAR_LPAREN;
	v->a[50836] = sym_word;
	v->a[50837] = actions(1594);
	v->a[50838] = 20;
	v->a[50839] = anon_sym_PIPE;
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = anon_sym_SEMI_SEMI;
	v->a[50841] = anon_sym_AMP_AMP;
	v->a[50842] = anon_sym_PIPE_PIPE;
	v->a[50843] = anon_sym_LT;
	v->a[50844] = anon_sym_GT;
	v->a[50845] = anon_sym_GT_GT;
	v->a[50846] = anon_sym_AMP_GT;
	v->a[50847] = anon_sym_AMP_GT_GT;
	v->a[50848] = anon_sym_LT_AMP;
	v->a[50849] = anon_sym_GT_AMP;
	v->a[50850] = anon_sym_GT_PIPE;
	v->a[50851] = anon_sym_LT_AMP_DASH;
	v->a[50852] = anon_sym_GT_AMP_DASH;
	v->a[50853] = anon_sym_LT_LT;
	v->a[50854] = anon_sym_LT_LT_DASH;
	v->a[50855] = aux_sym_heredoc_redirect_token1;
	v->a[50856] = anon_sym_AMP;
	v->a[50857] = anon_sym_BQUOTE;
	v->a[50858] = anon_sym_SEMI;
	v->a[50859] = 6;
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = actions(3);
	v->a[50861] = 1;
	v->a[50862] = sym_comment;
	v->a[50863] = actions(1536);
	v->a[50864] = 1;
	v->a[50865] = sym_file_descriptor;
	v->a[50866] = actions(1539);
	v->a[50867] = 1;
	v->a[50868] = sym_variable_name;
	v->a[50869] = actions(1526);
	v->a[50870] = 8;
	v->a[50871] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50872] = anon_sym_DOLLAR;
	v->a[50873] = anon_sym_DQUOTE;
	v->a[50874] = sym_raw_string;
	v->a[50875] = sym_number;
	v->a[50876] = anon_sym_DOLLAR_LBRACE;
	v->a[50877] = anon_sym_DOLLAR_LPAREN;
	v->a[50878] = sym_word;
	v->a[50879] = actions(1528);
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = 9;
	v->a[50881] = anon_sym_PIPE;
	v->a[50882] = anon_sym_SEMI_SEMI;
	v->a[50883] = anon_sym_AMP_AMP;
	v->a[50884] = anon_sym_PIPE_PIPE;
	v->a[50885] = anon_sym_LT_LT;
	v->a[50886] = anon_sym_LT_LT_DASH;
	v->a[50887] = aux_sym_heredoc_redirect_token1;
	v->a[50888] = anon_sym_AMP;
	v->a[50889] = anon_sym_SEMI;
	v->a[50890] = actions(1533);
	v->a[50891] = 11;
	v->a[50892] = anon_sym_LT;
	v->a[50893] = anon_sym_GT;
	v->a[50894] = anon_sym_GT_GT;
	v->a[50895] = anon_sym_AMP_GT;
	v->a[50896] = anon_sym_AMP_GT_GT;
	v->a[50897] = anon_sym_LT_AMP;
	v->a[50898] = anon_sym_GT_AMP;
	v->a[50899] = anon_sym_GT_PIPE;
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
