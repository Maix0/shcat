/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_428.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2140(t_small_parse_table_array *v)
{
	v->a[42800] = sym_terminator;
	v->a[42801] = actions(593);
	v->a[42802] = 2;
	v->a[42803] = anon_sym_SEMI_SEMI;
	v->a[42804] = anon_sym_SEMI;
	v->a[42805] = actions(595);
	v->a[42806] = 2;
	v->a[42807] = anon_sym_AMP_AMP;
	v->a[42808] = anon_sym_PIPE_PIPE;
	v->a[42809] = actions(1868);
	v->a[42810] = 3;
	v->a[42811] = anon_sym_LT;
	v->a[42812] = anon_sym_GT;
	v->a[42813] = anon_sym_GT_GT;
	v->a[42814] = state(916);
	v->a[42815] = 3;
	v->a[42816] = sym_file_redirect;
	v->a[42817] = sym_heredoc_redirect;
	v->a[42818] = aux_sym_redirected_statement_repeat1;
	v->a[42819] = 10;
	small_parse_table_2141(v);
}

void	small_parse_table_2141(t_small_parse_table_array *v)
{
	v->a[42820] = actions(3);
	v->a[42821] = 1;
	v->a[42822] = sym_comment;
	v->a[42823] = actions(580);
	v->a[42824] = 1;
	v->a[42825] = anon_sym_PIPE;
	v->a[42826] = actions(591);
	v->a[42827] = 1;
	v->a[42828] = anon_sym_RPAREN;
	v->a[42829] = actions(597);
	v->a[42830] = 1;
	v->a[42831] = anon_sym_LT_LT;
	v->a[42832] = actions(1870);
	v->a[42833] = 1;
	v->a[42834] = aux_sym_heredoc_redirect_token1;
	v->a[42835] = state(388);
	v->a[42836] = 1;
	v->a[42837] = sym_terminator;
	v->a[42838] = actions(593);
	v->a[42839] = 2;
	small_parse_table_2142(v);
}

void	small_parse_table_2142(t_small_parse_table_array *v)
{
	v->a[42840] = anon_sym_SEMI_SEMI;
	v->a[42841] = anon_sym_SEMI;
	v->a[42842] = actions(595);
	v->a[42843] = 2;
	v->a[42844] = anon_sym_AMP_AMP;
	v->a[42845] = anon_sym_PIPE_PIPE;
	v->a[42846] = actions(1868);
	v->a[42847] = 3;
	v->a[42848] = anon_sym_LT;
	v->a[42849] = anon_sym_GT;
	v->a[42850] = anon_sym_GT_GT;
	v->a[42851] = state(916);
	v->a[42852] = 3;
	v->a[42853] = sym_file_redirect;
	v->a[42854] = sym_heredoc_redirect;
	v->a[42855] = aux_sym_redirected_statement_repeat1;
	v->a[42856] = 10;
	v->a[42857] = actions(3);
	v->a[42858] = 1;
	v->a[42859] = sym_comment;
	small_parse_table_2143(v);
}

void	small_parse_table_2143(t_small_parse_table_array *v)
{
	v->a[42860] = actions(580);
	v->a[42861] = 1;
	v->a[42862] = anon_sym_PIPE;
	v->a[42863] = actions(597);
	v->a[42864] = 1;
	v->a[42865] = anon_sym_LT_LT;
	v->a[42866] = actions(716);
	v->a[42867] = 1;
	v->a[42868] = ts_builtin_sym_end;
	v->a[42869] = actions(1874);
	v->a[42870] = 1;
	v->a[42871] = aux_sym_heredoc_redirect_token1;
	v->a[42872] = state(450);
	v->a[42873] = 1;
	v->a[42874] = sym_terminator;
	v->a[42875] = actions(693);
	v->a[42876] = 2;
	v->a[42877] = anon_sym_SEMI_SEMI;
	v->a[42878] = anon_sym_SEMI;
	v->a[42879] = actions(695);
	small_parse_table_2144(v);
}

void	small_parse_table_2144(t_small_parse_table_array *v)
{
	v->a[42880] = 2;
	v->a[42881] = anon_sym_AMP_AMP;
	v->a[42882] = anon_sym_PIPE_PIPE;
	v->a[42883] = actions(1872);
	v->a[42884] = 3;
	v->a[42885] = anon_sym_LT;
	v->a[42886] = anon_sym_GT;
	v->a[42887] = anon_sym_GT_GT;
	v->a[42888] = state(922);
	v->a[42889] = 3;
	v->a[42890] = sym_file_redirect;
	v->a[42891] = sym_heredoc_redirect;
	v->a[42892] = aux_sym_redirected_statement_repeat1;
	v->a[42893] = 4;
	v->a[42894] = actions(3);
	v->a[42895] = 1;
	v->a[42896] = sym_comment;
	v->a[42897] = actions(588);
	v->a[42898] = 1;
	v->a[42899] = sym_variable_name;
	small_parse_table_2145(v);
}

/* EOF small_parse_table_428.c */
