/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_658.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3290(t_small_parse_table_array *v)
{
	v->a[65800] = actions(2084);
	v->a[65801] = 2;
	v->a[65802] = anon_sym_LT_LT;
	v->a[65803] = anon_sym_LT_LT_DASH;
	v->a[65804] = actions(2181);
	v->a[65805] = 2;
	v->a[65806] = anon_sym_LT_AMP_DASH;
	v->a[65807] = anon_sym_GT_AMP_DASH;
	v->a[65808] = state(1169);
	v->a[65809] = 3;
	v->a[65810] = sym_file_redirect;
	v->a[65811] = sym_heredoc_redirect;
	v->a[65812] = aux_sym_redirected_statement_repeat1;
	v->a[65813] = actions(2178);
	v->a[65814] = 6;
	v->a[65815] = anon_sym_LT;
	v->a[65816] = anon_sym_GT;
	v->a[65817] = anon_sym_GT_GT;
	v->a[65818] = anon_sym_LT_AMP;
	v->a[65819] = anon_sym_GT_AMP;
	small_parse_table_3291(v);
}

void	small_parse_table_3291(t_small_parse_table_array *v)
{
	v->a[65820] = anon_sym_GT_PIPE;
	v->a[65821] = actions(2076);
	v->a[65822] = 7;
	v->a[65823] = anon_sym_PIPE;
	v->a[65824] = anon_sym_SEMI_SEMI;
	v->a[65825] = anon_sym_AMP_AMP;
	v->a[65826] = anon_sym_PIPE_PIPE;
	v->a[65827] = anon_sym_AMP;
	v->a[65828] = anon_sym_BQUOTE;
	v->a[65829] = anon_sym_SEMI;
	v->a[65830] = 11;
	v->a[65831] = actions(3);
	v->a[65832] = 1;
	v->a[65833] = sym_comment;
	v->a[65834] = actions(682);
	v->a[65835] = 1;
	v->a[65836] = anon_sym_PIPE;
	v->a[65837] = actions(2065);
	v->a[65838] = 1;
	v->a[65839] = sym_file_descriptor;
	small_parse_table_3292(v);
}

void	small_parse_table_3292(t_small_parse_table_array *v)
{
	v->a[65840] = actions(2187);
	v->a[65841] = 1;
	v->a[65842] = aux_sym_heredoc_redirect_token1;
	v->a[65843] = state(773);
	v->a[65844] = 1;
	v->a[65845] = sym_terminator;
	v->a[65846] = actions(754);
	v->a[65847] = 2;
	v->a[65848] = anon_sym_LT_LT;
	v->a[65849] = anon_sym_LT_LT_DASH;
	v->a[65850] = actions(924);
	v->a[65851] = 2;
	v->a[65852] = anon_sym_AMP_AMP;
	v->a[65853] = anon_sym_PIPE_PIPE;
	v->a[65854] = actions(2063);
	v->a[65855] = 2;
	v->a[65856] = anon_sym_LT_AMP_DASH;
	v->a[65857] = anon_sym_GT_AMP_DASH;
	v->a[65858] = actions(1029);
	v->a[65859] = 3;
	small_parse_table_3293(v);
}

void	small_parse_table_3293(t_small_parse_table_array *v)
{
	v->a[65860] = anon_sym_SEMI_SEMI;
	v->a[65861] = anon_sym_AMP;
	v->a[65862] = anon_sym_SEMI;
	v->a[65863] = state(1268);
	v->a[65864] = 3;
	v->a[65865] = sym_file_redirect;
	v->a[65866] = sym_heredoc_redirect;
	v->a[65867] = aux_sym_redirected_statement_repeat1;
	v->a[65868] = actions(2061);
	v->a[65869] = 6;
	v->a[65870] = anon_sym_LT;
	v->a[65871] = anon_sym_GT;
	v->a[65872] = anon_sym_GT_GT;
	v->a[65873] = anon_sym_LT_AMP;
	v->a[65874] = anon_sym_GT_AMP;
	v->a[65875] = anon_sym_GT_PIPE;
	v->a[65876] = 16;
	v->a[65877] = actions(3);
	v->a[65878] = 1;
	v->a[65879] = sym_comment;
	small_parse_table_3294(v);
}

void	small_parse_table_3294(t_small_parse_table_array *v)
{
	v->a[65880] = actions(1774);
	v->a[65881] = 1;
	v->a[65882] = anon_sym_LPAREN;
	v->a[65883] = actions(1778);
	v->a[65884] = 1;
	v->a[65885] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65886] = actions(1780);
	v->a[65887] = 1;
	v->a[65888] = anon_sym_DOLLAR;
	v->a[65889] = actions(1782);
	v->a[65890] = 1;
	v->a[65891] = anon_sym_DQUOTE;
	v->a[65892] = actions(1784);
	v->a[65893] = 1;
	v->a[65894] = anon_sym_DOLLAR_LBRACE;
	v->a[65895] = actions(1786);
	v->a[65896] = 1;
	v->a[65897] = anon_sym_DOLLAR_LPAREN;
	v->a[65898] = actions(1788);
	v->a[65899] = 1;
	small_parse_table_3295(v);
}

/* EOF small_parse_table_658.c */
