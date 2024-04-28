/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_808.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4040(t_small_parse_table_array *v)
{
	v->a[80800] = sym__special_character;
	v->a[80801] = anon_sym_DQUOTE;
	v->a[80802] = sym_raw_string;
	v->a[80803] = sym_ansi_c_string;
	v->a[80804] = aux_sym_number_token1;
	v->a[80805] = aux_sym_number_token2;
	v->a[80806] = anon_sym_DOLLAR_LBRACE;
	v->a[80807] = anon_sym_DOLLAR_LPAREN;
	v->a[80808] = anon_sym_BQUOTE;
	v->a[80809] = anon_sym_DOLLAR_BQUOTE;
	v->a[80810] = anon_sym_LT_LPAREN;
	v->a[80811] = anon_sym_GT_LPAREN;
	v->a[80812] = sym_word;
	v->a[80813] = actions(5930);
	v->a[80814] = 22;
	v->a[80815] = anon_sym_SEMI;
	v->a[80816] = anon_sym_PIPE_PIPE;
	v->a[80817] = anon_sym_AMP_AMP;
	v->a[80818] = anon_sym_PIPE;
	v->a[80819] = anon_sym_AMP;
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = anon_sym_LT;
	v->a[80821] = anon_sym_GT;
	v->a[80822] = anon_sym_LT_LT;
	v->a[80823] = anon_sym_GT_GT;
	v->a[80824] = anon_sym_esac;
	v->a[80825] = anon_sym_SEMI_SEMI;
	v->a[80826] = anon_sym_SEMI_AMP;
	v->a[80827] = anon_sym_SEMI_SEMI_AMP;
	v->a[80828] = anon_sym_PIPE_AMP;
	v->a[80829] = anon_sym_AMP_GT;
	v->a[80830] = anon_sym_AMP_GT_GT;
	v->a[80831] = anon_sym_LT_AMP;
	v->a[80832] = anon_sym_GT_AMP;
	v->a[80833] = anon_sym_GT_PIPE;
	v->a[80834] = anon_sym_LT_AMP_DASH;
	v->a[80835] = anon_sym_GT_AMP_DASH;
	v->a[80836] = anon_sym_LT_LT_DASH;
	v->a[80837] = 6;
	v->a[80838] = actions(3);
	v->a[80839] = 1;
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = sym_comment;
	v->a[80841] = actions(5934);
	v->a[80842] = 1;
	v->a[80843] = aux_sym_concatenation_token1;
	v->a[80844] = actions(5937);
	v->a[80845] = 1;
	v->a[80846] = sym__concat;
	v->a[80847] = state(1704);
	v->a[80848] = 1;
	v->a[80849] = aux_sym_concatenation_repeat1;
	v->a[80850] = actions(1253);
	v->a[80851] = 4;
	v->a[80852] = sym_file_descriptor;
	v->a[80853] = sym_test_operator;
	v->a[80854] = sym__brace_start;
	v->a[80855] = aux_sym_heredoc_redirect_token1;
	v->a[80856] = actions(1251);
	v->a[80857] = 38;
	v->a[80858] = anon_sym_LPAREN_LPAREN;
	v->a[80859] = anon_sym_SEMI;
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = anon_sym_PIPE_PIPE;
	v->a[80861] = anon_sym_AMP_AMP;
	v->a[80862] = anon_sym_PIPE;
	v->a[80863] = anon_sym_AMP;
	v->a[80864] = anon_sym_LT;
	v->a[80865] = anon_sym_GT;
	v->a[80866] = anon_sym_LT_LT;
	v->a[80867] = anon_sym_GT_GT;
	v->a[80868] = anon_sym_RPAREN;
	v->a[80869] = anon_sym_SEMI_SEMI;
	v->a[80870] = anon_sym_PIPE_AMP;
	v->a[80871] = anon_sym_AMP_GT;
	v->a[80872] = anon_sym_AMP_GT_GT;
	v->a[80873] = anon_sym_LT_AMP;
	v->a[80874] = anon_sym_GT_AMP;
	v->a[80875] = anon_sym_GT_PIPE;
	v->a[80876] = anon_sym_LT_AMP_DASH;
	v->a[80877] = anon_sym_GT_AMP_DASH;
	v->a[80878] = anon_sym_LT_LT_DASH;
	v->a[80879] = anon_sym_LT_LT_LT;
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80881] = anon_sym_DOLLAR_LBRACK;
	v->a[80882] = anon_sym_DOLLAR;
	v->a[80883] = sym__special_character;
	v->a[80884] = anon_sym_DQUOTE;
	v->a[80885] = sym_raw_string;
	v->a[80886] = sym_ansi_c_string;
	v->a[80887] = aux_sym_number_token1;
	v->a[80888] = aux_sym_number_token2;
	v->a[80889] = anon_sym_DOLLAR_LBRACE;
	v->a[80890] = anon_sym_DOLLAR_LPAREN;
	v->a[80891] = anon_sym_BQUOTE;
	v->a[80892] = anon_sym_DOLLAR_BQUOTE;
	v->a[80893] = anon_sym_LT_LPAREN;
	v->a[80894] = anon_sym_GT_LPAREN;
	v->a[80895] = sym_word;
	v->a[80896] = 6;
	v->a[80897] = actions(3);
	v->a[80898] = 1;
	v->a[80899] = sym_comment;
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */
