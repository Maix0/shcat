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
	v->a[54800] = anon_sym_GT_GT;
	v->a[54801] = anon_sym_LT_AMP;
	v->a[54802] = anon_sym_GT_AMP;
	v->a[54803] = anon_sym_GT_PIPE;
	v->a[54804] = anon_sym_LT_GT;
	v->a[54805] = aux_sym_heredoc_redirect_token1;
	v->a[54806] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54807] = aux_sym_concatenation_token1;
	v->a[54808] = anon_sym_DOLLAR;
	v->a[54809] = anon_sym_DQUOTE;
	v->a[54810] = sym_raw_string;
	v->a[54811] = sym_number;
	v->a[54812] = anon_sym_DOLLAR_LBRACE;
	v->a[54813] = anon_sym_DOLLAR_LPAREN;
	v->a[54814] = anon_sym_BQUOTE;
	v->a[54815] = sym_word;
	v->a[54816] = 16;
	v->a[54817] = actions(3);
	v->a[54818] = 1;
	v->a[54819] = sym_comment;
	small_parse_table_2741(v);
}

void	small_parse_table_2741(t_small_parse_table_array *v)
{
	v->a[54820] = actions(1632);
	v->a[54821] = 1;
	v->a[54822] = anon_sym_esac;
	v->a[54823] = actions(1634);
	v->a[54824] = 1;
	v->a[54825] = anon_sym_LPAREN;
	v->a[54826] = actions(1638);
	v->a[54827] = 1;
	v->a[54828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54829] = actions(1640);
	v->a[54830] = 1;
	v->a[54831] = anon_sym_DOLLAR;
	v->a[54832] = actions(1642);
	v->a[54833] = 1;
	v->a[54834] = anon_sym_DQUOTE;
	v->a[54835] = actions(1644);
	v->a[54836] = 1;
	v->a[54837] = anon_sym_DOLLAR_LBRACE;
	v->a[54838] = actions(1646);
	v->a[54839] = 1;
	small_parse_table_2742(v);
}

void	small_parse_table_2742(t_small_parse_table_array *v)
{
	v->a[54840] = anon_sym_DOLLAR_LPAREN;
	v->a[54841] = actions(1648);
	v->a[54842] = 1;
	v->a[54843] = anon_sym_BQUOTE;
	v->a[54844] = actions(1650);
	v->a[54845] = 1;
	v->a[54846] = sym_extglob_pattern;
	v->a[54847] = state(1064);
	v->a[54848] = 1;
	v->a[54849] = aux_sym_case_statement_repeat1;
	v->a[54850] = state(1713);
	v->a[54851] = 1;
	v->a[54852] = sym_case_item;
	v->a[54853] = state(1931);
	v->a[54854] = 1;
	v->a[54855] = sym__case_item_last;
	v->a[54856] = state(1871);
	v->a[54857] = 2;
	v->a[54858] = sym_concatenation;
	v->a[54859] = sym__extglob_blob;
	small_parse_table_2743(v);
}

void	small_parse_table_2743(t_small_parse_table_array *v)
{
	v->a[54860] = actions(1630);
	v->a[54861] = 3;
	v->a[54862] = sym_raw_string;
	v->a[54863] = sym_number;
	v->a[54864] = sym_word;
	v->a[54865] = state(1804);
	v->a[54866] = 5;
	v->a[54867] = sym_arithmetic_expansion;
	v->a[54868] = sym_string;
	v->a[54869] = sym_simple_expansion;
	v->a[54870] = sym_expansion;
	v->a[54871] = sym_command_substitution;
	v->a[54872] = 11;
	v->a[54873] = actions(3);
	v->a[54874] = 1;
	v->a[54875] = sym_comment;
	v->a[54876] = actions(736);
	v->a[54877] = 1;
	v->a[54878] = anon_sym_PIPE;
	v->a[54879] = actions(904);
	small_parse_table_2744(v);
}

void	small_parse_table_2744(t_small_parse_table_array *v)
{
	v->a[54880] = 1;
	v->a[54881] = ts_builtin_sym_end;
	v->a[54882] = actions(1839);
	v->a[54883] = 1;
	v->a[54884] = aux_sym_heredoc_redirect_token1;
	v->a[54885] = actions(1841);
	v->a[54886] = 1;
	v->a[54887] = sym_file_descriptor;
	v->a[54888] = state(756);
	v->a[54889] = 1;
	v->a[54890] = sym_terminator;
	v->a[54891] = actions(744);
	v->a[54892] = 2;
	v->a[54893] = anon_sym_LT_LT;
	v->a[54894] = anon_sym_LT_LT_DASH;
	v->a[54895] = actions(808);
	v->a[54896] = 2;
	v->a[54897] = anon_sym_AMP_AMP;
	v->a[54898] = anon_sym_PIPE_PIPE;
	v->a[54899] = actions(806);
	small_parse_table_2745(v);
}

/* EOF small_parse_table_548.c */
