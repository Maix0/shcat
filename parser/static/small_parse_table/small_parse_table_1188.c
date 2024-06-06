/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1188.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5940(t_small_parse_table_array *v)
{
	v->a[118800] = actions(1997);
	v->a[118801] = 1;
	v->a[118802] = ts_builtin_sym_end;
	v->a[118803] = actions(3149);
	v->a[118804] = 1;
	v->a[118805] = aux_sym_heredoc_redirect_token1;
	v->a[118806] = actions(5604);
	v->a[118807] = 1;
	v->a[118808] = sym_file_descriptor;
	v->a[118809] = actions(2943);
	v->a[118810] = 2;
	v->a[118811] = anon_sym_AMP_AMP;
	v->a[118812] = anon_sym_PIPE_PIPE;
	v->a[118813] = actions(2945);
	v->a[118814] = 2;
	v->a[118815] = anon_sym_LT_LT;
	v->a[118816] = anon_sym_LT_LT_DASH;
	v->a[118817] = actions(5602);
	v->a[118818] = 2;
	v->a[118819] = anon_sym_LT_AMP_DASH;
	small_parse_table_5941(v);
}

void	small_parse_table_5941(t_small_parse_table_array *v)
{
	v->a[118820] = anon_sym_GT_AMP_DASH;
	v->a[118821] = actions(3147);
	v->a[118822] = 3;
	v->a[118823] = anon_sym_SEMI_SEMI;
	v->a[118824] = anon_sym_AMP;
	v->a[118825] = anon_sym_SEMI;
	v->a[118826] = state(2129);
	v->a[118827] = 3;
	v->a[118828] = sym_file_redirect;
	v->a[118829] = sym_heredoc_redirect;
	v->a[118830] = aux_sym_redirected_statement_repeat1;
	v->a[118831] = actions(5600);
	v->a[118832] = 8;
	v->a[118833] = anon_sym_LT;
	v->a[118834] = anon_sym_GT;
	v->a[118835] = anon_sym_GT_GT;
	v->a[118836] = anon_sym_AMP_GT;
	v->a[118837] = anon_sym_AMP_GT_GT;
	v->a[118838] = anon_sym_LT_AMP;
	v->a[118839] = anon_sym_GT_AMP;
	small_parse_table_5942(v);
}

void	small_parse_table_5942(t_small_parse_table_array *v)
{
	v->a[118840] = anon_sym_GT_PIPE;
	v->a[118841] = 10;
	v->a[118842] = actions(3);
	v->a[118843] = 1;
	v->a[118844] = sym_comment;
	v->a[118845] = actions(1995);
	v->a[118846] = 1;
	v->a[118847] = anon_sym_BQUOTE;
	v->a[118848] = actions(3403);
	v->a[118849] = 1;
	v->a[118850] = aux_sym_heredoc_redirect_token1;
	v->a[118851] = actions(5403);
	v->a[118852] = 1;
	v->a[118853] = sym_file_descriptor;
	v->a[118854] = actions(2945);
	v->a[118855] = 2;
	v->a[118856] = anon_sym_LT_LT;
	v->a[118857] = anon_sym_LT_LT_DASH;
	v->a[118858] = actions(3377);
	v->a[118859] = 2;
	small_parse_table_5943(v);
}

void	small_parse_table_5943(t_small_parse_table_array *v)
{
	v->a[118860] = anon_sym_AMP_AMP;
	v->a[118861] = anon_sym_PIPE_PIPE;
	v->a[118862] = actions(5401);
	v->a[118863] = 2;
	v->a[118864] = anon_sym_LT_AMP_DASH;
	v->a[118865] = anon_sym_GT_AMP_DASH;
	v->a[118866] = actions(3401);
	v->a[118867] = 3;
	v->a[118868] = anon_sym_SEMI_SEMI;
	v->a[118869] = anon_sym_AMP;
	v->a[118870] = anon_sym_SEMI;
	v->a[118871] = state(2140);
	v->a[118872] = 3;
	v->a[118873] = sym_file_redirect;
	v->a[118874] = sym_heredoc_redirect;
	v->a[118875] = aux_sym_redirected_statement_repeat1;
	v->a[118876] = actions(5399);
	v->a[118877] = 8;
	v->a[118878] = anon_sym_LT;
	v->a[118879] = anon_sym_GT;
	small_parse_table_5944(v);
}

void	small_parse_table_5944(t_small_parse_table_array *v)
{
	v->a[118880] = anon_sym_GT_GT;
	v->a[118881] = anon_sym_AMP_GT;
	v->a[118882] = anon_sym_AMP_GT_GT;
	v->a[118883] = anon_sym_LT_AMP;
	v->a[118884] = anon_sym_GT_AMP;
	v->a[118885] = anon_sym_GT_PIPE;
	v->a[118886] = 16;
	v->a[118887] = actions(3);
	v->a[118888] = 1;
	v->a[118889] = sym_comment;
	v->a[118890] = actions(5483);
	v->a[118891] = 1;
	v->a[118892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118893] = actions(5485);
	v->a[118894] = 1;
	v->a[118895] = anon_sym_DOLLAR;
	v->a[118896] = actions(5489);
	v->a[118897] = 1;
	v->a[118898] = anon_sym_DQUOTE;
	v->a[118899] = actions(5493);
	small_parse_table_5945(v);
}

/* EOF small_parse_table_1188.c */
