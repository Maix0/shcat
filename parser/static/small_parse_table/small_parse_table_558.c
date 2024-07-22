/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_558.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2790(t_small_parse_table_array *v)
{
	v->a[55800] = sym_comment;
	v->a[55801] = actions(782);
	v->a[55802] = 1;
	v->a[55803] = anon_sym_PIPE;
	v->a[55804] = actions(797);
	v->a[55805] = 1;
	v->a[55806] = anon_sym_RPAREN;
	v->a[55807] = actions(1888);
	v->a[55808] = 1;
	v->a[55809] = aux_sym_heredoc_redirect_token1;
	v->a[55810] = actions(1933);
	v->a[55811] = 1;
	v->a[55812] = sym_file_descriptor;
	v->a[55813] = state(630);
	v->a[55814] = 1;
	v->a[55815] = sym_terminator;
	v->a[55816] = actions(786);
	v->a[55817] = 2;
	v->a[55818] = anon_sym_SEMI_SEMI;
	v->a[55819] = anon_sym_SEMI;
	small_parse_table_2791(v);
}

void	small_parse_table_2791(t_small_parse_table_array *v)
{
	v->a[55820] = actions(788);
	v->a[55821] = 2;
	v->a[55822] = anon_sym_AMP_AMP;
	v->a[55823] = anon_sym_PIPE_PIPE;
	v->a[55824] = actions(790);
	v->a[55825] = 2;
	v->a[55826] = anon_sym_LT_LT;
	v->a[55827] = anon_sym_LT_LT_DASH;
	v->a[55828] = state(1034);
	v->a[55829] = 3;
	v->a[55830] = sym_file_redirect;
	v->a[55831] = sym_heredoc_redirect;
	v->a[55832] = aux_sym_redirected_statement_repeat1;
	v->a[55833] = actions(1931);
	v->a[55834] = 7;
	v->a[55835] = anon_sym_LT;
	v->a[55836] = anon_sym_GT;
	v->a[55837] = anon_sym_GT_GT;
	v->a[55838] = anon_sym_LT_AMP;
	v->a[55839] = anon_sym_GT_AMP;
	small_parse_table_2792(v);
}

void	small_parse_table_2792(t_small_parse_table_array *v)
{
	v->a[55840] = anon_sym_GT_PIPE;
	v->a[55841] = anon_sym_LT_GT;
	v->a[55842] = 15;
	v->a[55843] = actions(3);
	v->a[55844] = 1;
	v->a[55845] = sym_comment;
	v->a[55846] = actions(1720);
	v->a[55847] = 1;
	v->a[55848] = anon_sym_LPAREN;
	v->a[55849] = actions(1724);
	v->a[55850] = 1;
	v->a[55851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55852] = actions(1726);
	v->a[55853] = 1;
	v->a[55854] = anon_sym_DOLLAR;
	v->a[55855] = actions(1728);
	v->a[55856] = 1;
	v->a[55857] = anon_sym_DQUOTE;
	v->a[55858] = actions(1730);
	v->a[55859] = 1;
	small_parse_table_2793(v);
}

void	small_parse_table_2793(t_small_parse_table_array *v)
{
	v->a[55860] = anon_sym_DOLLAR_LBRACE;
	v->a[55861] = actions(1732);
	v->a[55862] = 1;
	v->a[55863] = anon_sym_DOLLAR_LPAREN;
	v->a[55864] = actions(1734);
	v->a[55865] = 1;
	v->a[55866] = anon_sym_BQUOTE;
	v->a[55867] = actions(1736);
	v->a[55868] = 1;
	v->a[55869] = sym_extglob_pattern;
	v->a[55870] = state(1050);
	v->a[55871] = 1;
	v->a[55872] = aux_sym_case_statement_repeat1;
	v->a[55873] = state(1682);
	v->a[55874] = 1;
	v->a[55875] = sym_case_item;
	v->a[55876] = state(1994);
	v->a[55877] = 1;
	v->a[55878] = sym__case_item_last;
	v->a[55879] = state(1877);
	small_parse_table_2794(v);
}

void	small_parse_table_2794(t_small_parse_table_array *v)
{
	v->a[55880] = 2;
	v->a[55881] = sym_concatenation;
	v->a[55882] = sym__extglob_blob;
	v->a[55883] = actions(1716);
	v->a[55884] = 3;
	v->a[55885] = sym_raw_string;
	v->a[55886] = sym_number;
	v->a[55887] = sym_word;
	v->a[55888] = state(1772);
	v->a[55889] = 5;
	v->a[55890] = sym_arithmetic_expansion;
	v->a[55891] = sym_string;
	v->a[55892] = sym_simple_expansion;
	v->a[55893] = sym_expansion;
	v->a[55894] = sym_command_substitution;
	v->a[55895] = 11;
	v->a[55896] = actions(3);
	v->a[55897] = 1;
	v->a[55898] = sym_comment;
	v->a[55899] = actions(782);
	small_parse_table_2795(v);
}

/* EOF small_parse_table_558.c */
