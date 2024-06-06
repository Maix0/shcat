/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_968.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4840(t_small_parse_table_array *v)
{
	v->a[96800] = actions(3048);
	v->a[96801] = 22;
	v->a[96802] = anon_sym_PIPE;
	v->a[96803] = anon_sym_RPAREN;
	v->a[96804] = anon_sym_SEMI_SEMI;
	v->a[96805] = anon_sym_PIPE_AMP;
	v->a[96806] = anon_sym_AMP_AMP;
	v->a[96807] = anon_sym_PIPE_PIPE;
	v->a[96808] = anon_sym_LT;
	v->a[96809] = anon_sym_GT;
	v->a[96810] = anon_sym_GT_GT;
	v->a[96811] = anon_sym_AMP_GT;
	v->a[96812] = anon_sym_AMP_GT_GT;
	v->a[96813] = anon_sym_LT_AMP;
	v->a[96814] = anon_sym_GT_AMP;
	v->a[96815] = anon_sym_GT_PIPE;
	v->a[96816] = anon_sym_LT_AMP_DASH;
	v->a[96817] = anon_sym_GT_AMP_DASH;
	v->a[96818] = anon_sym_LT_LT;
	v->a[96819] = anon_sym_LT_LT_DASH;
	small_parse_table_4841(v);
}

void	small_parse_table_4841(t_small_parse_table_array *v)
{
	v->a[96820] = anon_sym_AMP;
	v->a[96821] = aux_sym_concatenation_token1;
	v->a[96822] = anon_sym_BQUOTE;
	v->a[96823] = anon_sym_SEMI;
	v->a[96824] = 6;
	v->a[96825] = actions(3);
	v->a[96826] = 1;
	v->a[96827] = sym_comment;
	v->a[96828] = actions(5191);
	v->a[96829] = 1;
	v->a[96830] = aux_sym_concatenation_token1;
	v->a[96831] = actions(5296);
	v->a[96832] = 1;
	v->a[96833] = sym__concat;
	v->a[96834] = state(1992);
	v->a[96835] = 1;
	v->a[96836] = aux_sym_concatenation_repeat1;
	v->a[96837] = actions(2690);
	v->a[96838] = 2;
	v->a[96839] = sym_file_descriptor;
	small_parse_table_4842(v);
}

void	small_parse_table_4842(t_small_parse_table_array *v)
{
	v->a[96840] = aux_sym_heredoc_redirect_token1;
	v->a[96841] = actions(2688);
	v->a[96842] = 21;
	v->a[96843] = anon_sym_PIPE;
	v->a[96844] = anon_sym_SEMI_SEMI;
	v->a[96845] = anon_sym_SEMI_AMP;
	v->a[96846] = anon_sym_SEMI_SEMI_AMP;
	v->a[96847] = anon_sym_PIPE_AMP;
	v->a[96848] = anon_sym_AMP_AMP;
	v->a[96849] = anon_sym_PIPE_PIPE;
	v->a[96850] = anon_sym_LT;
	v->a[96851] = anon_sym_GT;
	v->a[96852] = anon_sym_GT_GT;
	v->a[96853] = anon_sym_AMP_GT;
	v->a[96854] = anon_sym_AMP_GT_GT;
	v->a[96855] = anon_sym_LT_AMP;
	v->a[96856] = anon_sym_GT_AMP;
	v->a[96857] = anon_sym_GT_PIPE;
	v->a[96858] = anon_sym_LT_AMP_DASH;
	v->a[96859] = anon_sym_GT_AMP_DASH;
	small_parse_table_4843(v);
}

void	small_parse_table_4843(t_small_parse_table_array *v)
{
	v->a[96860] = anon_sym_LT_LT;
	v->a[96861] = anon_sym_LT_LT_DASH;
	v->a[96862] = anon_sym_AMP;
	v->a[96863] = anon_sym_SEMI;
	v->a[96864] = 3;
	v->a[96865] = actions(3);
	v->a[96866] = 1;
	v->a[96867] = sym_comment;
	v->a[96868] = actions(3125);
	v->a[96869] = 3;
	v->a[96870] = sym_file_descriptor;
	v->a[96871] = sym__concat;
	v->a[96872] = aux_sym_heredoc_redirect_token1;
	v->a[96873] = actions(3123);
	v->a[96874] = 23;
	v->a[96875] = anon_sym_esac;
	v->a[96876] = anon_sym_PIPE;
	v->a[96877] = anon_sym_SEMI_SEMI;
	v->a[96878] = anon_sym_SEMI_AMP;
	v->a[96879] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_4844(v);
}

void	small_parse_table_4844(t_small_parse_table_array *v)
{
	v->a[96880] = anon_sym_PIPE_AMP;
	v->a[96881] = anon_sym_AMP_AMP;
	v->a[96882] = anon_sym_PIPE_PIPE;
	v->a[96883] = anon_sym_LT;
	v->a[96884] = anon_sym_GT;
	v->a[96885] = anon_sym_GT_GT;
	v->a[96886] = anon_sym_AMP_GT;
	v->a[96887] = anon_sym_AMP_GT_GT;
	v->a[96888] = anon_sym_LT_AMP;
	v->a[96889] = anon_sym_GT_AMP;
	v->a[96890] = anon_sym_GT_PIPE;
	v->a[96891] = anon_sym_LT_AMP_DASH;
	v->a[96892] = anon_sym_GT_AMP_DASH;
	v->a[96893] = anon_sym_LT_LT;
	v->a[96894] = anon_sym_LT_LT_DASH;
	v->a[96895] = anon_sym_AMP;
	v->a[96896] = aux_sym_concatenation_token1;
	v->a[96897] = anon_sym_SEMI;
	v->a[96898] = 6;
	v->a[96899] = actions(3);
	small_parse_table_4845(v);
}

/* EOF small_parse_table_968.c */
