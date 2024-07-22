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
	v->a[54801] = sym__concat;
	v->a[54802] = state(951);
	v->a[54803] = 1;
	v->a[54804] = aux_sym_concatenation_repeat1;
	v->a[54805] = actions(1200);
	v->a[54806] = 2;
	v->a[54807] = sym_file_descriptor;
	v->a[54808] = sym_variable_name;
	v->a[54809] = actions(1202);
	v->a[54810] = 16;
	v->a[54811] = anon_sym_LT;
	v->a[54812] = anon_sym_GT;
	v->a[54813] = anon_sym_GT_GT;
	v->a[54814] = anon_sym_LT_AMP;
	v->a[54815] = anon_sym_GT_AMP;
	v->a[54816] = anon_sym_GT_PIPE;
	v->a[54817] = anon_sym_LT_GT;
	v->a[54818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54819] = anon_sym_DOLLAR;
	small_parse_table_2741(v);
}

void	small_parse_table_2741(t_small_parse_table_array *v)
{
	v->a[54820] = anon_sym_DQUOTE;
	v->a[54821] = sym_raw_string;
	v->a[54822] = sym_number;
	v->a[54823] = anon_sym_DOLLAR_LBRACE;
	v->a[54824] = anon_sym_DOLLAR_LPAREN;
	v->a[54825] = anon_sym_BQUOTE;
	v->a[54826] = sym_word;
	v->a[54827] = 11;
	v->a[54828] = actions(3);
	v->a[54829] = 1;
	v->a[54830] = sym_comment;
	v->a[54831] = actions(782);
	v->a[54832] = 1;
	v->a[54833] = anon_sym_PIPE;
	v->a[54834] = actions(886);
	v->a[54835] = 1;
	v->a[54836] = anon_sym_SEMI;
	v->a[54837] = actions(1876);
	v->a[54838] = 1;
	v->a[54839] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2742(v);
}

void	small_parse_table_2742(t_small_parse_table_array *v)
{
	v->a[54840] = actions(1878);
	v->a[54841] = 1;
	v->a[54842] = sym_file_descriptor;
	v->a[54843] = state(599);
	v->a[54844] = 1;
	v->a[54845] = sym_terminator;
	v->a[54846] = actions(784);
	v->a[54847] = 2;
	v->a[54848] = anon_sym_esac;
	v->a[54849] = anon_sym_SEMI_SEMI;
	v->a[54850] = actions(882);
	v->a[54851] = 2;
	v->a[54852] = anon_sym_AMP_AMP;
	v->a[54853] = anon_sym_PIPE_PIPE;
	v->a[54854] = actions(884);
	v->a[54855] = 2;
	v->a[54856] = anon_sym_LT_LT;
	v->a[54857] = anon_sym_LT_LT_DASH;
	v->a[54858] = state(1099);
	v->a[54859] = 3;
	small_parse_table_2743(v);
}

void	small_parse_table_2743(t_small_parse_table_array *v)
{
	v->a[54860] = sym_file_redirect;
	v->a[54861] = sym_heredoc_redirect;
	v->a[54862] = aux_sym_redirected_statement_repeat1;
	v->a[54863] = actions(1874);
	v->a[54864] = 7;
	v->a[54865] = anon_sym_LT;
	v->a[54866] = anon_sym_GT;
	v->a[54867] = anon_sym_GT_GT;
	v->a[54868] = anon_sym_LT_AMP;
	v->a[54869] = anon_sym_GT_AMP;
	v->a[54870] = anon_sym_GT_PIPE;
	v->a[54871] = anon_sym_LT_GT;
	v->a[54872] = 7;
	v->a[54873] = actions(3);
	v->a[54874] = 1;
	v->a[54875] = sym_comment;
	v->a[54876] = actions(1917);
	v->a[54877] = 1;
	v->a[54878] = sym_file_descriptor;
	v->a[54879] = actions(1920);
	small_parse_table_2744(v);
}

void	small_parse_table_2744(t_small_parse_table_array *v)
{
	v->a[54880] = 1;
	v->a[54881] = sym_variable_name;
	v->a[54882] = state(1203);
	v->a[54883] = 1;
	v->a[54884] = sym_file_redirect;
	v->a[54885] = state(968);
	v->a[54886] = 2;
	v->a[54887] = sym_variable_assignment;
	v->a[54888] = aux_sym_command_repeat1;
	v->a[54889] = actions(1914);
	v->a[54890] = 7;
	v->a[54891] = anon_sym_LT;
	v->a[54892] = anon_sym_GT;
	v->a[54893] = anon_sym_GT_GT;
	v->a[54894] = anon_sym_LT_AMP;
	v->a[54895] = anon_sym_GT_AMP;
	v->a[54896] = anon_sym_GT_PIPE;
	v->a[54897] = anon_sym_LT_GT;
	v->a[54898] = actions(1912);
	v->a[54899] = 9;
	small_parse_table_2745(v);
}

/* EOF small_parse_table_548.c */
