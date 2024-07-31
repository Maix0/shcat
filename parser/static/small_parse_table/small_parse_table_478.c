/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_478.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2390(t_small_parse_table_array *v)
{
	v->a[47800] = 1;
	v->a[47801] = ts_builtin_sym_end;
	v->a[47802] = actions(1605);
	v->a[47803] = 1;
	v->a[47804] = aux_sym_heredoc_redirect_token1;
	v->a[47805] = state(594);
	v->a[47806] = 1;
	v->a[47807] = sym_terminator;
	v->a[47808] = actions(846);
	v->a[47809] = 2;
	v->a[47810] = anon_sym_SEMI_SEMI;
	v->a[47811] = anon_sym_SEMI;
	v->a[47812] = actions(848);
	v->a[47813] = 2;
	v->a[47814] = anon_sym_AMP_AMP;
	v->a[47815] = anon_sym_PIPE_PIPE;
	v->a[47816] = actions(850);
	v->a[47817] = 2;
	v->a[47818] = anon_sym_LT_LT;
	v->a[47819] = anon_sym_LT_LT_DASH;
	small_parse_table_2391(v);
}

void	small_parse_table_2391(t_small_parse_table_array *v)
{
	v->a[47820] = state(924);
	v->a[47821] = 3;
	v->a[47822] = sym_file_redirect;
	v->a[47823] = sym_heredoc_redirect;
	v->a[47824] = aux_sym_redirected_statement_repeat1;
	v->a[47825] = actions(1603);
	v->a[47826] = 7;
	v->a[47827] = anon_sym_LT;
	v->a[47828] = anon_sym_GT;
	v->a[47829] = anon_sym_GT_GT;
	v->a[47830] = anon_sym_LT_AMP;
	v->a[47831] = anon_sym_GT_AMP;
	v->a[47832] = anon_sym_GT_PIPE;
	v->a[47833] = anon_sym_LT_GT;
	v->a[47834] = 10;
	v->a[47835] = actions(3);
	v->a[47836] = 1;
	v->a[47837] = sym_comment;
	v->a[47838] = actions(746);
	v->a[47839] = 1;
	small_parse_table_2392(v);
}

void	small_parse_table_2392(t_small_parse_table_array *v)
{
	v->a[47840] = anon_sym_PIPE;
	v->a[47841] = actions(842);
	v->a[47842] = 1;
	v->a[47843] = anon_sym_RPAREN;
	v->a[47844] = actions(1591);
	v->a[47845] = 1;
	v->a[47846] = aux_sym_heredoc_redirect_token1;
	v->a[47847] = state(527);
	v->a[47848] = 1;
	v->a[47849] = sym_terminator;
	v->a[47850] = actions(850);
	v->a[47851] = 2;
	v->a[47852] = anon_sym_LT_LT;
	v->a[47853] = anon_sym_LT_LT_DASH;
	v->a[47854] = actions(858);
	v->a[47855] = 2;
	v->a[47856] = anon_sym_SEMI_SEMI;
	v->a[47857] = anon_sym_SEMI;
	v->a[47858] = actions(860);
	v->a[47859] = 2;
	small_parse_table_2393(v);
}

void	small_parse_table_2393(t_small_parse_table_array *v)
{
	v->a[47860] = anon_sym_AMP_AMP;
	v->a[47861] = anon_sym_PIPE_PIPE;
	v->a[47862] = state(918);
	v->a[47863] = 3;
	v->a[47864] = sym_file_redirect;
	v->a[47865] = sym_heredoc_redirect;
	v->a[47866] = aux_sym_redirected_statement_repeat1;
	v->a[47867] = actions(1597);
	v->a[47868] = 7;
	v->a[47869] = anon_sym_LT;
	v->a[47870] = anon_sym_GT;
	v->a[47871] = anon_sym_GT_GT;
	v->a[47872] = anon_sym_LT_AMP;
	v->a[47873] = anon_sym_GT_AMP;
	v->a[47874] = anon_sym_GT_PIPE;
	v->a[47875] = anon_sym_LT_GT;
	v->a[47876] = 10;
	v->a[47877] = actions(3);
	v->a[47878] = 1;
	v->a[47879] = sym_comment;
	small_parse_table_2394(v);
}

void	small_parse_table_2394(t_small_parse_table_array *v)
{
	v->a[47880] = actions(746);
	v->a[47881] = 1;
	v->a[47882] = anon_sym_PIPE;
	v->a[47883] = actions(752);
	v->a[47884] = 1;
	v->a[47885] = anon_sym_SEMI;
	v->a[47886] = actions(1595);
	v->a[47887] = 1;
	v->a[47888] = aux_sym_heredoc_redirect_token1;
	v->a[47889] = state(540);
	v->a[47890] = 1;
	v->a[47891] = sym_terminator;
	v->a[47892] = actions(748);
	v->a[47893] = 2;
	v->a[47894] = anon_sym_AMP_AMP;
	v->a[47895] = anon_sym_PIPE_PIPE;
	v->a[47896] = actions(750);
	v->a[47897] = 2;
	v->a[47898] = anon_sym_LT_LT;
	v->a[47899] = anon_sym_LT_LT_DASH;
	small_parse_table_2395(v);
}

/* EOF small_parse_table_478.c */
