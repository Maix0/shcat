/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_928.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4640(t_small_parse_table_array *v)
{
	v->a[92800] = 2;
	v->a[92801] = sym_file_descriptor;
	v->a[92802] = aux_sym_heredoc_redirect_token1;
	v->a[92803] = actions(4261);
	v->a[92804] = 3;
	v->a[92805] = sym_variable_name;
	v->a[92806] = sym_test_operator;
	v->a[92807] = sym__brace_start;
	v->a[92808] = actions(4247);
	v->a[92809] = 18;
	v->a[92810] = anon_sym_LPAREN_LPAREN;
	v->a[92811] = anon_sym_LT_LT_LT;
	v->a[92812] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92813] = anon_sym_DOLLAR_LBRACK;
	v->a[92814] = anon_sym_DOLLAR;
	v->a[92815] = sym__special_character;
	v->a[92816] = anon_sym_DQUOTE;
	v->a[92817] = sym_raw_string;
	v->a[92818] = sym_ansi_c_string;
	v->a[92819] = aux_sym_number_token1;
	small_parse_table_4641(v);
}

void	small_parse_table_4641(t_small_parse_table_array *v)
{
	v->a[92820] = aux_sym_number_token2;
	v->a[92821] = anon_sym_DOLLAR_LBRACE;
	v->a[92822] = anon_sym_DOLLAR_LPAREN;
	v->a[92823] = anon_sym_BQUOTE;
	v->a[92824] = anon_sym_DOLLAR_BQUOTE;
	v->a[92825] = anon_sym_LT_LPAREN;
	v->a[92826] = anon_sym_GT_LPAREN;
	v->a[92827] = sym_word;
	v->a[92828] = actions(5930);
	v->a[92829] = 21;
	v->a[92830] = anon_sym_SEMI;
	v->a[92831] = anon_sym_PIPE_PIPE;
	v->a[92832] = anon_sym_AMP_AMP;
	v->a[92833] = anon_sym_PIPE;
	v->a[92834] = anon_sym_AMP;
	v->a[92835] = anon_sym_LT;
	v->a[92836] = anon_sym_GT;
	v->a[92837] = anon_sym_LT_LT;
	v->a[92838] = anon_sym_GT_GT;
	v->a[92839] = anon_sym_SEMI_SEMI;
	small_parse_table_4642(v);
}

void	small_parse_table_4642(t_small_parse_table_array *v)
{
	v->a[92840] = anon_sym_SEMI_AMP;
	v->a[92841] = anon_sym_SEMI_SEMI_AMP;
	v->a[92842] = anon_sym_PIPE_AMP;
	v->a[92843] = anon_sym_AMP_GT;
	v->a[92844] = anon_sym_AMP_GT_GT;
	v->a[92845] = anon_sym_LT_AMP;
	v->a[92846] = anon_sym_GT_AMP;
	v->a[92847] = anon_sym_GT_PIPE;
	v->a[92848] = anon_sym_LT_AMP_DASH;
	v->a[92849] = anon_sym_GT_AMP_DASH;
	v->a[92850] = anon_sym_LT_LT_DASH;
	v->a[92851] = 6;
	v->a[92852] = actions(3);
	v->a[92853] = 1;
	v->a[92854] = sym_comment;
	v->a[92855] = actions(6017);
	v->a[92856] = 1;
	v->a[92857] = aux_sym_concatenation_token1;
	v->a[92858] = actions(6102);
	v->a[92859] = 1;
	small_parse_table_4643(v);
}

void	small_parse_table_4643(t_small_parse_table_array *v)
{
	v->a[92860] = sym__concat;
	v->a[92861] = state(1911);
	v->a[92862] = 1;
	v->a[92863] = aux_sym_concatenation_repeat1;
	v->a[92864] = actions(1288);
	v->a[92865] = 5;
	v->a[92866] = sym_file_descriptor;
	v->a[92867] = sym_test_operator;
	v->a[92868] = sym__brace_start;
	v->a[92869] = ts_builtin_sym_end;
	v->a[92870] = aux_sym_heredoc_redirect_token1;
	v->a[92871] = actions(1286);
	v->a[92872] = 36;
	v->a[92873] = anon_sym_LPAREN_LPAREN;
	v->a[92874] = anon_sym_SEMI;
	v->a[92875] = anon_sym_PIPE_PIPE;
	v->a[92876] = anon_sym_AMP_AMP;
	v->a[92877] = anon_sym_PIPE;
	v->a[92878] = anon_sym_AMP;
	v->a[92879] = anon_sym_LT;
	small_parse_table_4644(v);
}

void	small_parse_table_4644(t_small_parse_table_array *v)
{
	v->a[92880] = anon_sym_GT;
	v->a[92881] = anon_sym_LT_LT;
	v->a[92882] = anon_sym_GT_GT;
	v->a[92883] = anon_sym_SEMI_SEMI;
	v->a[92884] = anon_sym_PIPE_AMP;
	v->a[92885] = anon_sym_AMP_GT;
	v->a[92886] = anon_sym_AMP_GT_GT;
	v->a[92887] = anon_sym_LT_AMP;
	v->a[92888] = anon_sym_GT_AMP;
	v->a[92889] = anon_sym_GT_PIPE;
	v->a[92890] = anon_sym_LT_AMP_DASH;
	v->a[92891] = anon_sym_GT_AMP_DASH;
	v->a[92892] = anon_sym_LT_LT_DASH;
	v->a[92893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92894] = anon_sym_DOLLAR_LBRACK;
	v->a[92895] = anon_sym_DOLLAR;
	v->a[92896] = sym__special_character;
	v->a[92897] = anon_sym_DQUOTE;
	v->a[92898] = sym_raw_string;
	v->a[92899] = sym_ansi_c_string;
	small_parse_table_4645(v);
}

/* EOF small_parse_table_928.c */
