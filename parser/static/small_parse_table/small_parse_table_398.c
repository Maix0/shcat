/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_398.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1990(t_small_parse_table_array *v)
{
	v->a[39800] = ts_builtin_sym_end;
	v->a[39801] = aux_sym_heredoc_redirect_token1;
	v->a[39802] = actions(2688);
	v->a[39803] = 31;
	v->a[39804] = anon_sym_PIPE;
	v->a[39805] = anon_sym_SEMI_SEMI;
	v->a[39806] = anon_sym_PIPE_AMP;
	v->a[39807] = anon_sym_AMP_AMP;
	v->a[39808] = anon_sym_PIPE_PIPE;
	v->a[39809] = anon_sym_LT;
	v->a[39810] = anon_sym_GT;
	v->a[39811] = anon_sym_GT_GT;
	v->a[39812] = anon_sym_AMP_GT;
	v->a[39813] = anon_sym_AMP_GT_GT;
	v->a[39814] = anon_sym_LT_AMP;
	v->a[39815] = anon_sym_GT_AMP;
	v->a[39816] = anon_sym_GT_PIPE;
	v->a[39817] = anon_sym_LT_AMP_DASH;
	v->a[39818] = anon_sym_GT_AMP_DASH;
	v->a[39819] = anon_sym_LT_LT;
	small_parse_table_1991(v);
}

void	small_parse_table_1991(t_small_parse_table_array *v)
{
	v->a[39820] = anon_sym_LT_LT_DASH;
	v->a[39821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39822] = anon_sym_AMP;
	v->a[39823] = anon_sym_DOLLAR;
	v->a[39824] = sym__special_character;
	v->a[39825] = anon_sym_DQUOTE;
	v->a[39826] = sym_raw_string;
	v->a[39827] = aux_sym_number_token1;
	v->a[39828] = aux_sym_number_token2;
	v->a[39829] = anon_sym_DOLLAR_LBRACE;
	v->a[39830] = anon_sym_DOLLAR_LPAREN;
	v->a[39831] = anon_sym_BQUOTE;
	v->a[39832] = anon_sym_DOLLAR_BQUOTE;
	v->a[39833] = sym_word;
	v->a[39834] = anon_sym_SEMI;
	v->a[39835] = 6;
	v->a[39836] = actions(3);
	v->a[39837] = 1;
	v->a[39838] = sym_comment;
	v->a[39839] = actions(3450);
	small_parse_table_1992(v);
}

void	small_parse_table_1992(t_small_parse_table_array *v)
{
	v->a[39840] = 1;
	v->a[39841] = aux_sym_concatenation_token1;
	v->a[39842] = actions(3452);
	v->a[39843] = 1;
	v->a[39844] = sym__concat;
	v->a[39845] = state(885);
	v->a[39846] = 1;
	v->a[39847] = aux_sym_concatenation_repeat1;
	v->a[39848] = actions(2664);
	v->a[39849] = 6;
	v->a[39850] = sym_file_descriptor;
	v->a[39851] = sym_test_operator;
	v->a[39852] = sym__bare_dollar;
	v->a[39853] = sym__brace_start;
	v->a[39854] = ts_builtin_sym_end;
	v->a[39855] = aux_sym_heredoc_redirect_token1;
	v->a[39856] = actions(2662);
	v->a[39857] = 31;
	v->a[39858] = anon_sym_PIPE;
	v->a[39859] = anon_sym_SEMI_SEMI;
	small_parse_table_1993(v);
}

void	small_parse_table_1993(t_small_parse_table_array *v)
{
	v->a[39860] = anon_sym_PIPE_AMP;
	v->a[39861] = anon_sym_AMP_AMP;
	v->a[39862] = anon_sym_PIPE_PIPE;
	v->a[39863] = anon_sym_LT;
	v->a[39864] = anon_sym_GT;
	v->a[39865] = anon_sym_GT_GT;
	v->a[39866] = anon_sym_AMP_GT;
	v->a[39867] = anon_sym_AMP_GT_GT;
	v->a[39868] = anon_sym_LT_AMP;
	v->a[39869] = anon_sym_GT_AMP;
	v->a[39870] = anon_sym_GT_PIPE;
	v->a[39871] = anon_sym_LT_AMP_DASH;
	v->a[39872] = anon_sym_GT_AMP_DASH;
	v->a[39873] = anon_sym_LT_LT;
	v->a[39874] = anon_sym_LT_LT_DASH;
	v->a[39875] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39876] = anon_sym_AMP;
	v->a[39877] = anon_sym_DOLLAR;
	v->a[39878] = sym__special_character;
	v->a[39879] = anon_sym_DQUOTE;
	small_parse_table_1994(v);
}

void	small_parse_table_1994(t_small_parse_table_array *v)
{
	v->a[39880] = sym_raw_string;
	v->a[39881] = aux_sym_number_token1;
	v->a[39882] = aux_sym_number_token2;
	v->a[39883] = anon_sym_DOLLAR_LBRACE;
	v->a[39884] = anon_sym_DOLLAR_LPAREN;
	v->a[39885] = anon_sym_BQUOTE;
	v->a[39886] = anon_sym_DOLLAR_BQUOTE;
	v->a[39887] = sym_word;
	v->a[39888] = anon_sym_SEMI;
	v->a[39889] = 6;
	v->a[39890] = actions(3);
	v->a[39891] = 1;
	v->a[39892] = sym_comment;
	v->a[39893] = actions(3556);
	v->a[39894] = 1;
	v->a[39895] = aux_sym_concatenation_token1;
	v->a[39896] = actions(3559);
	v->a[39897] = 1;
	v->a[39898] = sym__concat;
	v->a[39899] = state(897);
	small_parse_table_1995(v);
}

/* EOF small_parse_table_398.c */
