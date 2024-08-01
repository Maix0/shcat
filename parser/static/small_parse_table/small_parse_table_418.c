/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_418.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2090(t_small_parse_table_array *v)
{
	v->a[41800] = 3;
	v->a[41801] = sym_file_redirect;
	v->a[41802] = sym_heredoc_redirect;
	v->a[41803] = aux_sym_redirected_statement_repeat1;
	v->a[41804] = 10;
	v->a[41805] = actions(3);
	v->a[41806] = 1;
	v->a[41807] = sym_comment;
	v->a[41808] = actions(580);
	v->a[41809] = 1;
	v->a[41810] = anon_sym_PIPE;
	v->a[41811] = actions(591);
	v->a[41812] = 1;
	v->a[41813] = anon_sym_BQUOTE;
	v->a[41814] = actions(597);
	v->a[41815] = 1;
	v->a[41816] = anon_sym_LT_LT;
	v->a[41817] = actions(1870);
	v->a[41818] = 1;
	v->a[41819] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2091(v);
}

void	small_parse_table_2091(t_small_parse_table_array *v)
{
	v->a[41820] = state(572);
	v->a[41821] = 1;
	v->a[41822] = sym_terminator;
	v->a[41823] = actions(593);
	v->a[41824] = 2;
	v->a[41825] = anon_sym_SEMI_SEMI;
	v->a[41826] = anon_sym_SEMI;
	v->a[41827] = actions(762);
	v->a[41828] = 2;
	v->a[41829] = anon_sym_AMP_AMP;
	v->a[41830] = anon_sym_PIPE_PIPE;
	v->a[41831] = actions(1880);
	v->a[41832] = 3;
	v->a[41833] = anon_sym_LT;
	v->a[41834] = anon_sym_GT;
	v->a[41835] = anon_sym_GT_GT;
	v->a[41836] = state(925);
	v->a[41837] = 3;
	v->a[41838] = sym_file_redirect;
	v->a[41839] = sym_heredoc_redirect;
	small_parse_table_2092(v);
}

void	small_parse_table_2092(t_small_parse_table_array *v)
{
	v->a[41840] = aux_sym_redirected_statement_repeat1;
	v->a[41841] = 10;
	v->a[41842] = actions(3);
	v->a[41843] = 1;
	v->a[41844] = sym_comment;
	v->a[41845] = actions(580);
	v->a[41846] = 1;
	v->a[41847] = anon_sym_PIPE;
	v->a[41848] = actions(591);
	v->a[41849] = 1;
	v->a[41850] = anon_sym_BQUOTE;
	v->a[41851] = actions(597);
	v->a[41852] = 1;
	v->a[41853] = anon_sym_LT_LT;
	v->a[41854] = actions(1870);
	v->a[41855] = 1;
	v->a[41856] = aux_sym_heredoc_redirect_token1;
	v->a[41857] = state(586);
	v->a[41858] = 1;
	v->a[41859] = sym_terminator;
	small_parse_table_2093(v);
}

void	small_parse_table_2093(t_small_parse_table_array *v)
{
	v->a[41860] = actions(593);
	v->a[41861] = 2;
	v->a[41862] = anon_sym_SEMI_SEMI;
	v->a[41863] = anon_sym_SEMI;
	v->a[41864] = actions(762);
	v->a[41865] = 2;
	v->a[41866] = anon_sym_AMP_AMP;
	v->a[41867] = anon_sym_PIPE_PIPE;
	v->a[41868] = actions(1880);
	v->a[41869] = 3;
	v->a[41870] = anon_sym_LT;
	v->a[41871] = anon_sym_GT;
	v->a[41872] = anon_sym_GT_GT;
	v->a[41873] = state(925);
	v->a[41874] = 3;
	v->a[41875] = sym_file_redirect;
	v->a[41876] = sym_heredoc_redirect;
	v->a[41877] = aux_sym_redirected_statement_repeat1;
	v->a[41878] = 10;
	v->a[41879] = actions(3);
	small_parse_table_2094(v);
}

void	small_parse_table_2094(t_small_parse_table_array *v)
{
	v->a[41880] = 1;
	v->a[41881] = sym_comment;
	v->a[41882] = actions(580);
	v->a[41883] = 1;
	v->a[41884] = anon_sym_PIPE;
	v->a[41885] = actions(591);
	v->a[41886] = 1;
	v->a[41887] = anon_sym_BQUOTE;
	v->a[41888] = actions(597);
	v->a[41889] = 1;
	v->a[41890] = anon_sym_LT_LT;
	v->a[41891] = actions(1870);
	v->a[41892] = 1;
	v->a[41893] = aux_sym_heredoc_redirect_token1;
	v->a[41894] = state(585);
	v->a[41895] = 1;
	v->a[41896] = sym_terminator;
	v->a[41897] = actions(593);
	v->a[41898] = 2;
	v->a[41899] = anon_sym_SEMI_SEMI;
	small_parse_table_2095(v);
}

/* EOF small_parse_table_418.c */
