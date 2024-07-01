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
	v->a[55800] = anon_sym_LT_AMP;
	v->a[55801] = anon_sym_GT_AMP;
	v->a[55802] = anon_sym_GT_PIPE;
	v->a[55803] = anon_sym_LT_GT;
	v->a[55804] = 11;
	v->a[55805] = actions(3);
	v->a[55806] = 1;
	v->a[55807] = sym_comment;
	v->a[55808] = actions(736);
	v->a[55809] = 1;
	v->a[55810] = anon_sym_PIPE;
	v->a[55811] = actions(804);
	v->a[55812] = 1;
	v->a[55813] = ts_builtin_sym_end;
	v->a[55814] = actions(1839);
	v->a[55815] = 1;
	v->a[55816] = aux_sym_heredoc_redirect_token1;
	v->a[55817] = actions(1841);
	v->a[55818] = 1;
	v->a[55819] = sym_file_descriptor;
	small_parse_table_2791(v);
}

void	small_parse_table_2791(t_small_parse_table_array *v)
{
	v->a[55820] = state(765);
	v->a[55821] = 1;
	v->a[55822] = sym_terminator;
	v->a[55823] = actions(744);
	v->a[55824] = 2;
	v->a[55825] = anon_sym_LT_LT;
	v->a[55826] = anon_sym_LT_LT_DASH;
	v->a[55827] = actions(808);
	v->a[55828] = 2;
	v->a[55829] = anon_sym_AMP_AMP;
	v->a[55830] = anon_sym_PIPE_PIPE;
	v->a[55831] = actions(806);
	v->a[55832] = 3;
	v->a[55833] = anon_sym_SEMI_SEMI;
	v->a[55834] = anon_sym_AMP;
	v->a[55835] = anon_sym_SEMI;
	v->a[55836] = state(1073);
	v->a[55837] = 3;
	v->a[55838] = sym_file_redirect;
	v->a[55839] = sym_heredoc_redirect;
	small_parse_table_2792(v);
}

void	small_parse_table_2792(t_small_parse_table_array *v)
{
	v->a[55840] = aux_sym_redirected_statement_repeat1;
	v->a[55841] = actions(1837);
	v->a[55842] = 7;
	v->a[55843] = anon_sym_LT;
	v->a[55844] = anon_sym_GT;
	v->a[55845] = anon_sym_GT_GT;
	v->a[55846] = anon_sym_LT_AMP;
	v->a[55847] = anon_sym_GT_AMP;
	v->a[55848] = anon_sym_GT_PIPE;
	v->a[55849] = anon_sym_LT_GT;
	v->a[55850] = 6;
	v->a[55851] = actions(3);
	v->a[55852] = 1;
	v->a[55853] = sym_comment;
	v->a[55854] = actions(1871);
	v->a[55855] = 1;
	v->a[55856] = aux_sym_concatenation_token1;
	v->a[55857] = actions(1874);
	v->a[55858] = 1;
	v->a[55859] = sym__concat;
	small_parse_table_2793(v);
}

void	small_parse_table_2793(t_small_parse_table_array *v)
{
	v->a[55860] = state(980);
	v->a[55861] = 1;
	v->a[55862] = aux_sym_concatenation_repeat1;
	v->a[55863] = actions(1093);
	v->a[55864] = 3;
	v->a[55865] = sym_file_descriptor;
	v->a[55866] = sym_variable_name;
	v->a[55867] = aux_sym_heredoc_redirect_token1;
	v->a[55868] = actions(1088);
	v->a[55869] = 16;
	v->a[55870] = anon_sym_esac;
	v->a[55871] = anon_sym_PIPE;
	v->a[55872] = anon_sym_SEMI_SEMI;
	v->a[55873] = anon_sym_AMP_AMP;
	v->a[55874] = anon_sym_PIPE_PIPE;
	v->a[55875] = anon_sym_LT;
	v->a[55876] = anon_sym_GT;
	v->a[55877] = anon_sym_GT_GT;
	v->a[55878] = anon_sym_LT_AMP;
	v->a[55879] = anon_sym_GT_AMP;
	small_parse_table_2794(v);
}

void	small_parse_table_2794(t_small_parse_table_array *v)
{
	v->a[55880] = anon_sym_GT_PIPE;
	v->a[55881] = anon_sym_LT_GT;
	v->a[55882] = anon_sym_LT_LT;
	v->a[55883] = anon_sym_LT_LT_DASH;
	v->a[55884] = anon_sym_AMP;
	v->a[55885] = anon_sym_SEMI;
	v->a[55886] = 11;
	v->a[55887] = actions(3);
	v->a[55888] = 1;
	v->a[55889] = sym_comment;
	v->a[55890] = actions(736);
	v->a[55891] = 1;
	v->a[55892] = anon_sym_PIPE;
	v->a[55893] = actions(842);
	v->a[55894] = 1;
	v->a[55895] = anon_sym_BQUOTE;
	v->a[55896] = actions(1865);
	v->a[55897] = 1;
	v->a[55898] = aux_sym_heredoc_redirect_token1;
	v->a[55899] = actions(1867);
	small_parse_table_2795(v);
}

/* EOF small_parse_table_558.c */
