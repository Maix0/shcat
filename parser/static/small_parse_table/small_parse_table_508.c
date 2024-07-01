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
	v->a[50800] = anon_sym_GT;
	v->a[50801] = anon_sym_GT_GT;
	v->a[50802] = anon_sym_LT_AMP;
	v->a[50803] = anon_sym_GT_AMP;
	v->a[50804] = anon_sym_GT_PIPE;
	v->a[50805] = anon_sym_LT_AMP_DASH;
	v->a[50806] = anon_sym_GT_AMP_DASH;
	v->a[50807] = aux_sym_heredoc_redirect_token1;
	v->a[50808] = 12;
	v->a[50809] = actions(3);
	v->a[50810] = 1;
	v->a[50811] = sym_comment;
	v->a[50812] = actions(790);
	v->a[50813] = 1;
	v->a[50814] = sym_file_descriptor;
	v->a[50815] = actions(1796);
	v->a[50816] = 1;
	v->a[50817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50818] = actions(1798);
	v->a[50819] = 1;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = anon_sym_DOLLAR;
	v->a[50821] = actions(1800);
	v->a[50822] = 1;
	v->a[50823] = anon_sym_DQUOTE;
	v->a[50824] = actions(1802);
	v->a[50825] = 1;
	v->a[50826] = anon_sym_DOLLAR_LBRACE;
	v->a[50827] = actions(1804);
	v->a[50828] = 1;
	v->a[50829] = anon_sym_DOLLAR_LPAREN;
	v->a[50830] = actions(1806);
	v->a[50831] = 1;
	v->a[50832] = anon_sym_BQUOTE;
	v->a[50833] = state(1846);
	v->a[50834] = 1;
	v->a[50835] = sym_concatenation;
	v->a[50836] = actions(1808);
	v->a[50837] = 3;
	v->a[50838] = sym_raw_string;
	v->a[50839] = sym_number;
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = sym_word;
	v->a[50841] = state(1631);
	v->a[50842] = 5;
	v->a[50843] = sym_arithmetic_expansion;
	v->a[50844] = sym_string;
	v->a[50845] = sym_simple_expansion;
	v->a[50846] = sym_expansion;
	v->a[50847] = sym_command_substitution;
	v->a[50848] = actions(788);
	v->a[50849] = 11;
	v->a[50850] = anon_sym_AMP_AMP;
	v->a[50851] = anon_sym_PIPE_PIPE;
	v->a[50852] = anon_sym_LT;
	v->a[50853] = anon_sym_GT;
	v->a[50854] = anon_sym_GT_GT;
	v->a[50855] = anon_sym_LT_AMP;
	v->a[50856] = anon_sym_GT_AMP;
	v->a[50857] = anon_sym_GT_PIPE;
	v->a[50858] = anon_sym_LT_AMP_DASH;
	v->a[50859] = anon_sym_GT_AMP_DASH;
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = aux_sym_heredoc_redirect_token1;
	v->a[50861] = 18;
	v->a[50862] = actions(3);
	v->a[50863] = 1;
	v->a[50864] = sym_comment;
	v->a[50865] = actions(1774);
	v->a[50866] = 1;
	v->a[50867] = anon_sym_LPAREN;
	v->a[50868] = actions(1778);
	v->a[50869] = 1;
	v->a[50870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50871] = actions(1780);
	v->a[50872] = 1;
	v->a[50873] = anon_sym_DOLLAR;
	v->a[50874] = actions(1782);
	v->a[50875] = 1;
	v->a[50876] = anon_sym_DQUOTE;
	v->a[50877] = actions(1784);
	v->a[50878] = 1;
	v->a[50879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = actions(1786);
	v->a[50881] = 1;
	v->a[50882] = anon_sym_DOLLAR_LPAREN;
	v->a[50883] = actions(1788);
	v->a[50884] = 1;
	v->a[50885] = anon_sym_BQUOTE;
	v->a[50886] = actions(1790);
	v->a[50887] = 1;
	v->a[50888] = sym_extglob_pattern;
	v->a[50889] = actions(1810);
	v->a[50890] = 1;
	v->a[50891] = anon_sym_esac;
	v->a[50892] = state(1117);
	v->a[50893] = 1;
	v->a[50894] = sym_terminator;
	v->a[50895] = state(1248);
	v->a[50896] = 1;
	v->a[50897] = aux_sym_case_statement_repeat1;
	v->a[50898] = state(1920);
	v->a[50899] = 1;
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
