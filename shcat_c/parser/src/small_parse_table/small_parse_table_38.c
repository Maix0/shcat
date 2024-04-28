/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_38.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_190(t_small_parse_table_array *v)
{
	v->a[3800] = aux_sym__multiline_variable_name_token1;
	v->a[3801] = actions(1241);
	v->a[3802] = 4;
	v->a[3803] = sym_file_descriptor;
	v->a[3804] = sym_test_operator;
	v->a[3805] = sym__bare_dollar;
	v->a[3806] = sym__brace_start;
	v->a[3807] = actions(1809);
	v->a[3808] = 9;
	v->a[3809] = anon_sym_DASH;
	v->a[3810] = anon_sym_STAR;
	v->a[3811] = anon_sym_BANG;
	v->a[3812] = anon_sym_QMARK;
	v->a[3813] = anon_sym_DOLLAR;
	v->a[3814] = anon_sym_POUND;
	v->a[3815] = anon_sym_AT2;
	v->a[3816] = anon_sym_0;
	v->a[3817] = anon_sym__;
	v->a[3818] = actions(1239);
	v->a[3819] = 40;
	small_parse_table_191(v);
}

void	small_parse_table_191(t_small_parse_table_array *v)
{
	v->a[3820] = anon_sym_LPAREN_LPAREN;
	v->a[3821] = anon_sym_SEMI;
	v->a[3822] = anon_sym_PIPE_PIPE;
	v->a[3823] = anon_sym_AMP_AMP;
	v->a[3824] = anon_sym_PIPE;
	v->a[3825] = anon_sym_AMP;
	v->a[3826] = anon_sym_EQ_EQ;
	v->a[3827] = anon_sym_LT;
	v->a[3828] = anon_sym_GT;
	v->a[3829] = anon_sym_LT_LT;
	v->a[3830] = anon_sym_GT_GT;
	v->a[3831] = anon_sym_LPAREN;
	v->a[3832] = anon_sym_RPAREN;
	v->a[3833] = anon_sym_SEMI_SEMI;
	v->a[3834] = anon_sym_PIPE_AMP;
	v->a[3835] = anon_sym_EQ_TILDE;
	v->a[3836] = anon_sym_AMP_GT;
	v->a[3837] = anon_sym_AMP_GT_GT;
	v->a[3838] = anon_sym_LT_AMP;
	v->a[3839] = anon_sym_GT_AMP;
	small_parse_table_192(v);
}

void	small_parse_table_192(t_small_parse_table_array *v)
{
	v->a[3840] = anon_sym_GT_PIPE;
	v->a[3841] = anon_sym_LT_AMP_DASH;
	v->a[3842] = anon_sym_GT_AMP_DASH;
	v->a[3843] = anon_sym_LT_LT_DASH;
	v->a[3844] = aux_sym_heredoc_redirect_token1;
	v->a[3845] = anon_sym_LT_LT_LT;
	v->a[3846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3847] = anon_sym_DOLLAR_LBRACK;
	v->a[3848] = sym__special_character;
	v->a[3849] = sym_raw_string;
	v->a[3850] = sym_ansi_c_string;
	v->a[3851] = aux_sym_number_token1;
	v->a[3852] = aux_sym_number_token2;
	v->a[3853] = anon_sym_DOLLAR_LBRACE;
	v->a[3854] = anon_sym_DOLLAR_LPAREN;
	v->a[3855] = anon_sym_BQUOTE;
	v->a[3856] = anon_sym_DOLLAR_BQUOTE;
	v->a[3857] = anon_sym_LT_LPAREN;
	v->a[3858] = anon_sym_GT_LPAREN;
	v->a[3859] = sym_word;
	small_parse_table_193(v);
}

void	small_parse_table_193(t_small_parse_table_array *v)
{
	v->a[3860] = 24;
	v->a[3861] = actions(3);
	v->a[3862] = 1;
	v->a[3863] = sym_comment;
	v->a[3864] = actions(1924);
	v->a[3865] = 1;
	v->a[3866] = anon_sym_DOLLAR_LBRACK;
	v->a[3867] = actions(1927);
	v->a[3868] = 1;
	v->a[3869] = anon_sym_DOLLAR;
	v->a[3870] = actions(1930);
	v->a[3871] = 1;
	v->a[3872] = sym__special_character;
	v->a[3873] = actions(1933);
	v->a[3874] = 1;
	v->a[3875] = anon_sym_DQUOTE;
	v->a[3876] = actions(1936);
	v->a[3877] = 1;
	v->a[3878] = aux_sym_number_token1;
	v->a[3879] = actions(1939);
	small_parse_table_194(v);
}

void	small_parse_table_194(t_small_parse_table_array *v)
{
	v->a[3880] = 1;
	v->a[3881] = aux_sym_number_token2;
	v->a[3882] = actions(1942);
	v->a[3883] = 1;
	v->a[3884] = anon_sym_DOLLAR_LBRACE;
	v->a[3885] = actions(1945);
	v->a[3886] = 1;
	v->a[3887] = anon_sym_DOLLAR_LPAREN;
	v->a[3888] = actions(1948);
	v->a[3889] = 1;
	v->a[3890] = anon_sym_BQUOTE;
	v->a[3891] = actions(1951);
	v->a[3892] = 1;
	v->a[3893] = anon_sym_DOLLAR_BQUOTE;
	v->a[3894] = actions(1957);
	v->a[3895] = 1;
	v->a[3896] = aux_sym__simple_variable_name_token1;
	v->a[3897] = actions(1960);
	v->a[3898] = 1;
	v->a[3899] = sym_variable_name;
	small_parse_table_195(v);
}

/* EOF small_parse_table_38.c */
