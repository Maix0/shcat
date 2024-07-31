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
	v->a[50800] = anon_sym_GT_PIPE;
	v->a[50801] = anon_sym_LT_GT;
	v->a[50802] = anon_sym_LT_LT;
	v->a[50803] = anon_sym_LT_LT_DASH;
	v->a[50804] = anon_sym_SEMI;
	v->a[50805] = 3;
	v->a[50806] = actions(3);
	v->a[50807] = 1;
	v->a[50808] = sym_comment;
	v->a[50809] = actions(457);
	v->a[50810] = 3;
	v->a[50811] = sym__concat;
	v->a[50812] = sym_variable_name;
	v->a[50813] = aux_sym_heredoc_redirect_token1;
	v->a[50814] = actions(455);
	v->a[50815] = 16;
	v->a[50816] = anon_sym_esac;
	v->a[50817] = anon_sym_PIPE;
	v->a[50818] = anon_sym_SEMI_SEMI;
	v->a[50819] = anon_sym_AMP_AMP;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = anon_sym_PIPE_PIPE;
	v->a[50821] = anon_sym_LT;
	v->a[50822] = anon_sym_GT;
	v->a[50823] = anon_sym_GT_GT;
	v->a[50824] = anon_sym_LT_AMP;
	v->a[50825] = anon_sym_GT_AMP;
	v->a[50826] = anon_sym_GT_PIPE;
	v->a[50827] = anon_sym_LT_GT;
	v->a[50828] = anon_sym_LT_LT;
	v->a[50829] = anon_sym_LT_LT_DASH;
	v->a[50830] = aux_sym_concatenation_token1;
	v->a[50831] = anon_sym_SEMI;
	v->a[50832] = 4;
	v->a[50833] = actions(3);
	v->a[50834] = 1;
	v->a[50835] = sym_comment;
	v->a[50836] = actions(754);
	v->a[50837] = 1;
	v->a[50838] = sym_variable_name;
	v->a[50839] = state(929);
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = 2;
	v->a[50841] = sym_variable_assignment;
	v->a[50842] = aux_sym__variable_assignments_repeat1;
	v->a[50843] = actions(742);
	v->a[50844] = 16;
	v->a[50845] = anon_sym_LT;
	v->a[50846] = anon_sym_GT;
	v->a[50847] = anon_sym_GT_GT;
	v->a[50848] = anon_sym_LT_AMP;
	v->a[50849] = anon_sym_GT_AMP;
	v->a[50850] = anon_sym_GT_PIPE;
	v->a[50851] = anon_sym_LT_GT;
	v->a[50852] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50853] = anon_sym_DOLLAR;
	v->a[50854] = anon_sym_DQUOTE;
	v->a[50855] = sym_raw_string;
	v->a[50856] = sym_number;
	v->a[50857] = anon_sym_DOLLAR_LBRACE;
	v->a[50858] = anon_sym_DOLLAR_LPAREN;
	v->a[50859] = anon_sym_BQUOTE;
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = sym_word;
	v->a[50861] = 6;
	v->a[50862] = actions(3);
	v->a[50863] = 1;
	v->a[50864] = sym_comment;
	v->a[50865] = actions(1686);
	v->a[50866] = 1;
	v->a[50867] = aux_sym_heredoc_redirect_token1;
	v->a[50868] = actions(1683);
	v->a[50869] = 2;
	v->a[50870] = anon_sym_LT_LT;
	v->a[50871] = anon_sym_LT_LT_DASH;
	v->a[50872] = state(962);
	v->a[50873] = 3;
	v->a[50874] = sym_file_redirect;
	v->a[50875] = sym_heredoc_redirect;
	v->a[50876] = aux_sym_redirected_statement_repeat1;
	v->a[50877] = actions(1678);
	v->a[50878] = 6;
	v->a[50879] = anon_sym_PIPE;
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = anon_sym_SEMI_SEMI;
	v->a[50881] = anon_sym_AMP_AMP;
	v->a[50882] = anon_sym_PIPE_PIPE;
	v->a[50883] = anon_sym_BQUOTE;
	v->a[50884] = anon_sym_SEMI;
	v->a[50885] = actions(1741);
	v->a[50886] = 7;
	v->a[50887] = anon_sym_LT;
	v->a[50888] = anon_sym_GT;
	v->a[50889] = anon_sym_GT_GT;
	v->a[50890] = anon_sym_LT_AMP;
	v->a[50891] = anon_sym_GT_AMP;
	v->a[50892] = anon_sym_GT_PIPE;
	v->a[50893] = anon_sym_LT_GT;
	v->a[50894] = 4;
	v->a[50895] = actions(3);
	v->a[50896] = 1;
	v->a[50897] = sym_comment;
	v->a[50898] = actions(1259);
	v->a[50899] = 1;
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
