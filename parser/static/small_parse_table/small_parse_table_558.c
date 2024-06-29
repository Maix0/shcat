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
	v->a[55800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55801] = actions(1885);
	v->a[55802] = 1;
	v->a[55803] = anon_sym_DOLLAR;
	v->a[55804] = actions(1887);
	v->a[55805] = 1;
	v->a[55806] = anon_sym_DQUOTE;
	v->a[55807] = actions(1889);
	v->a[55808] = 1;
	v->a[55809] = anon_sym_DOLLAR_LBRACE;
	v->a[55810] = actions(1891);
	v->a[55811] = 1;
	v->a[55812] = anon_sym_DOLLAR_LPAREN;
	v->a[55813] = actions(1893);
	v->a[55814] = 1;
	v->a[55815] = anon_sym_BQUOTE;
	v->a[55816] = actions(1895);
	v->a[55817] = 1;
	v->a[55818] = sym_extglob_pattern;
	v->a[55819] = actions(1903);
	small_parse_table_2791(v);
}

void	small_parse_table_2791(t_small_parse_table_array *v)
{
	v->a[55820] = 1;
	v->a[55821] = anon_sym_esac;
	v->a[55822] = state(1300);
	v->a[55823] = 1;
	v->a[55824] = sym_terminator;
	v->a[55825] = state(1393);
	v->a[55826] = 1;
	v->a[55827] = aux_sym_case_statement_repeat1;
	v->a[55828] = state(1923);
	v->a[55829] = 1;
	v->a[55830] = sym_case_item;
	v->a[55831] = state(2195);
	v->a[55832] = 1;
	v->a[55833] = sym__case_item_last;
	v->a[55834] = state(2078);
	v->a[55835] = 2;
	v->a[55836] = sym_concatenation;
	v->a[55837] = sym__extglob_blob;
	v->a[55838] = actions(1875);
	v->a[55839] = 3;
	small_parse_table_2792(v);
}

void	small_parse_table_2792(t_small_parse_table_array *v)
{
	v->a[55840] = sym_raw_string;
	v->a[55841] = sym_number;
	v->a[55842] = sym_word;
	v->a[55843] = actions(1881);
	v->a[55844] = 4;
	v->a[55845] = anon_sym_SEMI_SEMI;
	v->a[55846] = aux_sym_heredoc_redirect_token1;
	v->a[55847] = anon_sym_AMP;
	v->a[55848] = anon_sym_SEMI;
	v->a[55849] = state(2004);
	v->a[55850] = 5;
	v->a[55851] = sym_arithmetic_expansion;
	v->a[55852] = sym_string;
	v->a[55853] = sym_simple_expansion;
	v->a[55854] = sym_expansion;
	v->a[55855] = sym_command_substitution;
	v->a[55856] = 3;
	v->a[55857] = actions(3);
	v->a[55858] = 1;
	v->a[55859] = sym_comment;
	small_parse_table_2793(v);
}

void	small_parse_table_2793(t_small_parse_table_array *v)
{
	v->a[55860] = actions(1126);
	v->a[55861] = 2;
	v->a[55862] = sym_file_descriptor;
	v->a[55863] = sym__concat;
	v->a[55864] = actions(1124);
	v->a[55865] = 25;
	v->a[55866] = anon_sym_PIPE;
	v->a[55867] = anon_sym_AMP_AMP;
	v->a[55868] = anon_sym_PIPE_PIPE;
	v->a[55869] = anon_sym_LT;
	v->a[55870] = anon_sym_GT;
	v->a[55871] = anon_sym_GT_GT;
	v->a[55872] = anon_sym_AMP_GT;
	v->a[55873] = anon_sym_AMP_GT_GT;
	v->a[55874] = anon_sym_LT_AMP;
	v->a[55875] = anon_sym_GT_AMP;
	v->a[55876] = anon_sym_GT_PIPE;
	v->a[55877] = anon_sym_LT_AMP_DASH;
	v->a[55878] = anon_sym_GT_AMP_DASH;
	v->a[55879] = anon_sym_LT_LT;
	small_parse_table_2794(v);
}

void	small_parse_table_2794(t_small_parse_table_array *v)
{
	v->a[55880] = anon_sym_LT_LT_DASH;
	v->a[55881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55882] = aux_sym_concatenation_token1;
	v->a[55883] = anon_sym_DOLLAR;
	v->a[55884] = anon_sym_DQUOTE;
	v->a[55885] = sym_raw_string;
	v->a[55886] = sym_number;
	v->a[55887] = anon_sym_DOLLAR_LBRACE;
	v->a[55888] = anon_sym_DOLLAR_LPAREN;
	v->a[55889] = anon_sym_BQUOTE;
	v->a[55890] = sym_word;
	v->a[55891] = 16;
	v->a[55892] = actions(1074);
	v->a[55893] = 1;
	v->a[55894] = sym_comment;
	v->a[55895] = actions(1831);
	v->a[55896] = 1;
	v->a[55897] = anon_sym_LPAREN;
	v->a[55898] = actions(1833);
	v->a[55899] = 1;
	small_parse_table_2795(v);
}

/* EOF small_parse_table_558.c */
