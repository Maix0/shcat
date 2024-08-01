/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_548.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2740(t_small_parse_table_array *v)
{
	v->a[54800] = 1;
	v->a[54801] = anon_sym_QMARK;
	v->a[54802] = actions(2814);
	v->a[54803] = 1;
	v->a[54804] = anon_sym_COLON;
	v->a[54805] = actions(2702);
	v->a[54806] = 2;
	v->a[54807] = anon_sym_PLUS;
	v->a[54808] = anon_sym_DASH;
	v->a[54809] = actions(2706);
	v->a[54810] = 2;
	v->a[54811] = anon_sym_PLUS_PLUS;
	v->a[54812] = anon_sym_DASH_DASH;
	v->a[54813] = actions(2704);
	v->a[54814] = 3;
	v->a[54815] = anon_sym_STAR;
	v->a[54816] = anon_sym_SLASH;
	v->a[54817] = anon_sym_PERCENT;
	v->a[54818] = 5;
	v->a[54819] = actions(3);
	small_parse_table_2741(v);
}

void	small_parse_table_2741(t_small_parse_table_array *v)
{
	v->a[54820] = 1;
	v->a[54821] = sym_comment;
	v->a[54822] = actions(2357);
	v->a[54823] = 1;
	v->a[54824] = aux_sym_heredoc_redirect_token1;
	v->a[54825] = actions(2816);
	v->a[54826] = 1;
	v->a[54827] = anon_sym_PIPE;
	v->a[54828] = state(1352);
	v->a[54829] = 1;
	v->a[54830] = aux_sym_pipeline_repeat1;
	v->a[54831] = actions(2353);
	v->a[54832] = 6;
	v->a[54833] = anon_sym_AMP_AMP;
	v->a[54834] = anon_sym_PIPE_PIPE;
	v->a[54835] = anon_sym_LT;
	v->a[54836] = anon_sym_GT;
	v->a[54837] = anon_sym_GT_GT;
	v->a[54838] = anon_sym_LT_LT;
	v->a[54839] = 6;
	small_parse_table_2742(v);
}

void	small_parse_table_2742(t_small_parse_table_array *v)
{
	v->a[54840] = actions(1436);
	v->a[54841] = 1;
	v->a[54842] = sym_comment;
	v->a[54843] = actions(2754);
	v->a[54844] = 1;
	v->a[54845] = anon_sym_QMARK;
	v->a[54846] = actions(2818);
	v->a[54847] = 1;
	v->a[54848] = anon_sym_RPAREN_RPAREN;
	v->a[54849] = actions(2702);
	v->a[54850] = 2;
	v->a[54851] = anon_sym_PLUS;
	v->a[54852] = anon_sym_DASH;
	v->a[54853] = actions(2706);
	v->a[54854] = 2;
	v->a[54855] = anon_sym_PLUS_PLUS;
	v->a[54856] = anon_sym_DASH_DASH;
	v->a[54857] = actions(2704);
	v->a[54858] = 3;
	v->a[54859] = anon_sym_STAR;
	small_parse_table_2743(v);
}

void	small_parse_table_2743(t_small_parse_table_array *v)
{
	v->a[54860] = anon_sym_SLASH;
	v->a[54861] = anon_sym_PERCENT;
	v->a[54862] = 6;
	v->a[54863] = actions(1436);
	v->a[54864] = 1;
	v->a[54865] = sym_comment;
	v->a[54866] = actions(2822);
	v->a[54867] = 1;
	v->a[54868] = anon_sym_GT_GT;
	v->a[54869] = actions(2824);
	v->a[54870] = 1;
	v->a[54871] = anon_sym_LT_LT;
	v->a[54872] = actions(1876);
	v->a[54873] = 2;
	v->a[54874] = anon_sym_LT;
	v->a[54875] = anon_sym_GT;
	v->a[54876] = actions(2820);
	v->a[54877] = 2;
	v->a[54878] = anon_sym_AMP_AMP;
	v->a[54879] = anon_sym_PIPE_PIPE;
	small_parse_table_2744(v);
}

void	small_parse_table_2744(t_small_parse_table_array *v)
{
	v->a[54880] = state(971);
	v->a[54881] = 3;
	v->a[54882] = sym_file_redirect;
	v->a[54883] = sym_heredoc_redirect;
	v->a[54884] = aux_sym_redirected_statement_repeat1;
	v->a[54885] = 3;
	v->a[54886] = actions(1436);
	v->a[54887] = 1;
	v->a[54888] = sym_comment;
	v->a[54889] = actions(1114);
	v->a[54890] = 2;
	v->a[54891] = anon_sym_PLUS;
	v->a[54892] = anon_sym_DASH;
	v->a[54893] = actions(1116);
	v->a[54894] = 7;
	v->a[54895] = anon_sym_RPAREN;
	v->a[54896] = anon_sym_STAR;
	v->a[54897] = anon_sym_SLASH;
	v->a[54898] = anon_sym_PERCENT;
	v->a[54899] = anon_sym_QMARK;
	small_parse_table_2745(v);
}

/* EOF small_parse_table_548.c */
