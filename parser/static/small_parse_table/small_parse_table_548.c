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
	v->a[54800] = actions(3);
	v->a[54801] = 1;
	v->a[54802] = sym_comment;
	v->a[54803] = actions(1637);
	v->a[54804] = 1;
	v->a[54805] = anon_sym_LPAREN;
	v->a[54806] = actions(1641);
	v->a[54807] = 1;
	v->a[54808] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54809] = actions(1643);
	v->a[54810] = 1;
	v->a[54811] = anon_sym_DOLLAR;
	v->a[54812] = actions(1645);
	v->a[54813] = 1;
	v->a[54814] = anon_sym_DQUOTE;
	v->a[54815] = actions(1647);
	v->a[54816] = 1;
	v->a[54817] = anon_sym_DOLLAR_LBRACE;
	v->a[54818] = actions(1649);
	v->a[54819] = 1;
	small_parse_table_2741(v);
}

void	small_parse_table_2741(t_small_parse_table_array *v)
{
	v->a[54820] = anon_sym_DOLLAR_LPAREN;
	v->a[54821] = actions(1651);
	v->a[54822] = 1;
	v->a[54823] = anon_sym_BQUOTE;
	v->a[54824] = actions(1653);
	v->a[54825] = 1;
	v->a[54826] = sym_extglob_pattern;
	v->a[54827] = actions(1875);
	v->a[54828] = 1;
	v->a[54829] = anon_sym_esac;
	v->a[54830] = state(1035);
	v->a[54831] = 1;
	v->a[54832] = aux_sym_case_statement_repeat1;
	v->a[54833] = state(1713);
	v->a[54834] = 1;
	v->a[54835] = sym_case_item;
	v->a[54836] = state(2053);
	v->a[54837] = 1;
	v->a[54838] = sym__case_item_last;
	v->a[54839] = state(1873);
	small_parse_table_2742(v);
}

void	small_parse_table_2742(t_small_parse_table_array *v)
{
	v->a[54840] = 2;
	v->a[54841] = sym_concatenation;
	v->a[54842] = sym__extglob_blob;
	v->a[54843] = actions(1633);
	v->a[54844] = 3;
	v->a[54845] = sym_raw_string;
	v->a[54846] = sym_number;
	v->a[54847] = sym_word;
	v->a[54848] = state(1806);
	v->a[54849] = 5;
	v->a[54850] = sym_arithmetic_expansion;
	v->a[54851] = sym_string;
	v->a[54852] = sym_simple_expansion;
	v->a[54853] = sym_expansion;
	v->a[54854] = sym_command_substitution;
	v->a[54855] = 6;
	v->a[54856] = actions(3);
	v->a[54857] = 1;
	v->a[54858] = sym_comment;
	v->a[54859] = actions(1877);
	small_parse_table_2743(v);
}

void	small_parse_table_2743(t_small_parse_table_array *v)
{
	v->a[54860] = 1;
	v->a[54861] = aux_sym_concatenation_token1;
	v->a[54862] = actions(1879);
	v->a[54863] = 1;
	v->a[54864] = sym__concat;
	v->a[54865] = state(987);
	v->a[54866] = 1;
	v->a[54867] = aux_sym_concatenation_repeat1;
	v->a[54868] = actions(1158);
	v->a[54869] = 3;
	v->a[54870] = sym_file_descriptor;
	v->a[54871] = sym_variable_name;
	v->a[54872] = aux_sym_heredoc_redirect_token1;
	v->a[54873] = actions(1154);
	v->a[54874] = 16;
	v->a[54875] = anon_sym_esac;
	v->a[54876] = anon_sym_PIPE;
	v->a[54877] = anon_sym_SEMI_SEMI;
	v->a[54878] = anon_sym_AMP_AMP;
	v->a[54879] = anon_sym_PIPE_PIPE;
	small_parse_table_2744(v);
}

void	small_parse_table_2744(t_small_parse_table_array *v)
{
	v->a[54880] = anon_sym_LT;
	v->a[54881] = anon_sym_GT;
	v->a[54882] = anon_sym_GT_GT;
	v->a[54883] = anon_sym_LT_AMP;
	v->a[54884] = anon_sym_GT_AMP;
	v->a[54885] = anon_sym_GT_PIPE;
	v->a[54886] = anon_sym_LT_GT;
	v->a[54887] = anon_sym_LT_LT;
	v->a[54888] = anon_sym_LT_LT_DASH;
	v->a[54889] = anon_sym_AMP;
	v->a[54890] = anon_sym_SEMI;
	v->a[54891] = 11;
	v->a[54892] = actions(3);
	v->a[54893] = 1;
	v->a[54894] = sym_comment;
	v->a[54895] = actions(692);
	v->a[54896] = 1;
	v->a[54897] = anon_sym_PIPE;
	v->a[54898] = actions(862);
	v->a[54899] = 1;
	small_parse_table_2745(v);
}

/* EOF small_parse_table_548.c */
