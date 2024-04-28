/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2678.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13390(t_small_parse_table_array *v)
{
	v->a[267800] = anon_sym_SEMI_SEMI;
	v->a[267801] = anon_sym_PIPE_AMP;
	v->a[267802] = anon_sym_AMP_GT;
	v->a[267803] = anon_sym_AMP_GT_GT;
	v->a[267804] = anon_sym_LT_AMP;
	v->a[267805] = anon_sym_GT_AMP;
	v->a[267806] = anon_sym_GT_PIPE;
	v->a[267807] = anon_sym_LT_AMP_DASH;
	v->a[267808] = anon_sym_GT_AMP_DASH;
	v->a[267809] = anon_sym_LT_LT_DASH;
	v->a[267810] = anon_sym_BQUOTE;
	v->a[267811] = 10;
	v->a[267812] = actions(3);
	v->a[267813] = 1;
	v->a[267814] = sym_comment;
	v->a[267815] = actions(4411);
	v->a[267816] = 1;
	v->a[267817] = aux_sym_heredoc_redirect_token1;
	v->a[267818] = actions(11562);
	v->a[267819] = 1;
	small_parse_table_13391(v);
}

void	small_parse_table_13391(t_small_parse_table_array *v)
{
	v->a[267820] = sym_file_descriptor;
	v->a[267821] = actions(4380);
	v->a[267822] = 2;
	v->a[267823] = anon_sym_PIPE_PIPE;
	v->a[267824] = anon_sym_AMP_AMP;
	v->a[267825] = actions(4382);
	v->a[267826] = 2;
	v->a[267827] = anon_sym_LT_LT;
	v->a[267828] = anon_sym_LT_LT_DASH;
	v->a[267829] = actions(4409);
	v->a[267830] = 2;
	v->a[267831] = anon_sym_SEMI;
	v->a[267832] = anon_sym_AMP;
	v->a[267833] = actions(11335);
	v->a[267834] = 2;
	v->a[267835] = anon_sym_LT_AMP_DASH;
	v->a[267836] = anon_sym_GT_AMP_DASH;
	v->a[267837] = actions(4257);
	v->a[267838] = 3;
	v->a[267839] = anon_sym_SEMI_SEMI;
	small_parse_table_13392(v);
}

void	small_parse_table_13392(t_small_parse_table_array *v)
{
	v->a[267840] = anon_sym_SEMI_AMP;
	v->a[267841] = anon_sym_SEMI_SEMI_AMP;
	v->a[267842] = state(4455);
	v->a[267843] = 3;
	v->a[267844] = sym_file_redirect;
	v->a[267845] = sym_heredoc_redirect;
	v->a[267846] = aux_sym_redirected_statement_repeat1;
	v->a[267847] = actions(11333);
	v->a[267848] = 8;
	v->a[267849] = anon_sym_LT;
	v->a[267850] = anon_sym_GT;
	v->a[267851] = anon_sym_GT_GT;
	v->a[267852] = anon_sym_AMP_GT;
	v->a[267853] = anon_sym_AMP_GT_GT;
	v->a[267854] = anon_sym_LT_AMP;
	v->a[267855] = anon_sym_GT_AMP;
	v->a[267856] = anon_sym_GT_PIPE;
	v->a[267857] = 3;
	v->a[267858] = actions(3);
	v->a[267859] = 1;
	small_parse_table_13393(v);
}

void	small_parse_table_13393(t_small_parse_table_array *v)
{
	v->a[267860] = sym_comment;
	v->a[267861] = actions(12205);
	v->a[267862] = 3;
	v->a[267863] = sym_file_descriptor;
	v->a[267864] = ts_builtin_sym_end;
	v->a[267865] = aux_sym_heredoc_redirect_token1;
	v->a[267866] = actions(12207);
	v->a[267867] = 21;
	v->a[267868] = anon_sym_SEMI;
	v->a[267869] = anon_sym_PIPE_PIPE;
	v->a[267870] = anon_sym_AMP_AMP;
	v->a[267871] = anon_sym_PIPE;
	v->a[267872] = anon_sym_AMP;
	v->a[267873] = anon_sym_LT;
	v->a[267874] = anon_sym_GT;
	v->a[267875] = anon_sym_LT_LT;
	v->a[267876] = anon_sym_GT_GT;
	v->a[267877] = anon_sym_RPAREN;
	v->a[267878] = anon_sym_SEMI_SEMI;
	v->a[267879] = anon_sym_PIPE_AMP;
	small_parse_table_13394(v);
}

void	small_parse_table_13394(t_small_parse_table_array *v)
{
	v->a[267880] = anon_sym_AMP_GT;
	v->a[267881] = anon_sym_AMP_GT_GT;
	v->a[267882] = anon_sym_LT_AMP;
	v->a[267883] = anon_sym_GT_AMP;
	v->a[267884] = anon_sym_GT_PIPE;
	v->a[267885] = anon_sym_LT_AMP_DASH;
	v->a[267886] = anon_sym_GT_AMP_DASH;
	v->a[267887] = anon_sym_LT_LT_DASH;
	v->a[267888] = anon_sym_BQUOTE;
	v->a[267889] = 3;
	v->a[267890] = actions(3);
	v->a[267891] = 1;
	v->a[267892] = sym_comment;
	v->a[267893] = actions(12103);
	v->a[267894] = 3;
	v->a[267895] = sym_file_descriptor;
	v->a[267896] = ts_builtin_sym_end;
	v->a[267897] = aux_sym_heredoc_redirect_token1;
	v->a[267898] = actions(12101);
	v->a[267899] = 21;
	small_parse_table_13395(v);
}

/* EOF small_parse_table_2678.c */
